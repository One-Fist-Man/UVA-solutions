#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t,k=1;
    cin>>t;
    while(t--)
    {
        ll n,sum=0;
        double avg=0;
        vector<int>vec;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
//            int it=count(vec.begin(), vec.end(), a);
//            if(it==0)
//            sum+=a;
            vec.push_back(a);
        }
//
//        for(int i=0;i<vec.size();i++)
//        {
//
//        }
//        avg=(double)sum/n;
//        ll mini=INT_MAX,value=0;
//        for(int i=0;i<n;i++)
//        {
//            double a=abs(avg-vec[i]);
//            //cout<<a<<endl;
//            if(mini>a)
//            {
//                mini=a;
//                value=vec[i];
//            }
//        }
                sort(vec.begin(),vec.end(), greater<int>() );
              //  cout<<vec[0]<<endl;
                 cout<<"Case "<<k<<": ";
            if(n%2==0)
            {
                cout<<vec[(n/2)-1]<<endl;
            }
            else cout<<vec[(n/2)]<<endl;

//        cout<<"Case "<<k<<": "<<value<<endl;
        k++;
    }


    return 0;
}


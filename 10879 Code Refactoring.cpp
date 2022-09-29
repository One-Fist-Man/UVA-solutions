#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        vector<ll>vec;
        ll n;
        cin>>n;
        for(ll i=2; i*i<=n; i++)
        {
            if(i*i==n)
            {
                vec.push_back(i);
            }
            else if(n%i==0)
            {
                vec.push_back(i);
                vec.push_back(n/i);
            }


        }
       // for(ll i=0; i<vec.size(); i++)
          //  cout<<vec[i]<<" ";

        cout<<"Case #"<<k<<": "<<n<<" = "<<vec[0]<<" * "<<vec[1]<<" = "<<vec[2]<<" * "<<vec[3]<<endl;
        k++;
    }


    return 0;
}

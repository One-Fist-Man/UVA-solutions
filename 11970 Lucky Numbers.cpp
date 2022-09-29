#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int>vec;
        for(int i=1; i*i<n; i++)
        {
            int a=n-(i*i);
            if(a%i==0)
            {
                vec.push_back(a);
            }
        }
        int flag=0;
        sort(vec.begin(),vec.end());
        cout<<"Case "<<k<<": ";
        k++;
        for(int i=0; i<vec.size(); i++)
        {
            if(flag==0)
            {
                cout<<vec[i];
                flag=1;
            }
            else
                cout<<" "<<vec[i];
        }
        cout<<endl;

    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        map<ll,ll>mp;
        mp[0],mp[1],mp[2],mp[3],mp[4],mp[5],mp[6],mp[7],mp[8],mp[9];
        ll n;

        cin>>n;
        for(ll i=1; i<=n; i++)
        {
            ll a=i;
            while(a!=0)
            {
                ll p=a%10;
                a/=10;
                mp[p]++;
            }
        }
        ll k=0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(k==1)
                cout<<" ";
            k=1;
            cout<<it->second;
        }
        cout<<endl;

    }

    return 0;
}

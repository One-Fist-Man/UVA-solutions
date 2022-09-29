#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    map<ll,ll>mp;
    ll n,m;

    while(cin>>n>>m)
    {
        if(n==0&&m==0) return 0;
        ll counti=0;
        while(n--)
        {
            ll a;
            cin>>a;
            mp[a]=1;
        }
        while(m--)
        {
            ll a;
            cin>>a;
            mp[a]++;
            if(mp[a]==2) counti++;
        }
        cout<<counti<<endl;
    }

    return 0;
}

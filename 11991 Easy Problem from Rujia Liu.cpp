#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
 vector<vector<ll> > vec(1000005);
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,m;
    while(cin>>n>>m)
    {
        for(ll i=1; i<=n; i++)
        {
            ll a;
            cin>>a;
            vec[a].push_back(i);
        }
        while(m--)
        {
            ll a,b;
            cin>>a>>b;
            if(a>vec[b].size())
                cout<<0<<endl;
            else
                cout<<vec[b][a-1]<<endl;
        }
        for(ll i=1;i<=100000;i++) vec[i].clear();
    }
    return 0;
}

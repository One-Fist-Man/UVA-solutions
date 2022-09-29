/* dfs method

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
ll first[105];
ll last[105];
ll visit[105];
vector<vector<ll> >vec(105);
ll n,m;
vector<ll>ans;

void dfs(ll a)
{
    visit[a] = 1;
    for (ll i=0 ; i<vec[a].size(); i++)
    {
        ll y=vec[a][i];
        if (!visit[y])
            dfs(y);
        // cout<<1<<endl;
    }
    ans.push_back(a);
}

//ll counti=0;
//void dfs(ll a)
//{
//    visit[a]=1;
//    for(ll i=0; i<vec[a].size(); i++)
//    {
//        ll x=vec[a][i];
//        if(visit[x]==1)
//            continue;
//        //cout<<x<<" "<<a<<endl;
//        counti++;
//        //visit[x]=1;
//        dfs(x);
//    }
//    cout<<a<<" "<<counti<<endl;
//    last[a]=counti;
//    counti++;
//}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //ll n,m;
    while(cin>>n>>m)
    {
        if(!n&&!m) return 0;
        while(m--)
        {
            ll a,b;
            cin>>a>>b;
            vec[a].push_back(b);
        }

        for(ll i=1; i<=n; i++)
        {
            if(visit[i])
                continue;
            dfs(i);
        }
        reverse(ans.begin(),ans.end());
        cout<<ans[0];
        for(ll i=1; i<ans.size(); i++)
            cout<<" "<<ans[i];
        cout<<endl;
        ans.clear();
        for(int i=0;i<=n;i++) vec[i].clear();
        memeset(visit,0);
//    for(ll i=1; i<=n; i++)
//        cout<<last[i]<<" ";
    }


    return 0;
}
*/


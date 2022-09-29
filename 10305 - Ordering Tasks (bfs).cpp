#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
queue<int>q;
vector<vector<int> > vec(105);
ll visit[105];
ll val[105];
vector<int>ans;
void bfs(int a)
{
    while(q.empty()!=1)
    {
        ll x=q.front();
        ans.push_back(x);
        q.pop();
        visit[x]=1;
        for(int i=0; i<vec[x].size(); i++)
        {
            ll y=vec[x][i];
            if(visit[y])
                continue;
            val[y]--;
            if(val[y]==0)
                q.push(y);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,m;
    cin>>n>>m;

    memeset(val,0);
    memeset(visit,0);

    while(m--)
    {
        ll a,b;
        cin>>a>>b;
        vec[a].push_back(b);
        val[b]++;
    }
    for(int i=1;i<=n;i++)

    for(int i=1; i<=n; i++)
    {
        if(!visit[i])
        {
            bfs(i);
        }
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";

    return 0;
}

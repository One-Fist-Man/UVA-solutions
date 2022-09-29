#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 1000000000000000
#define memeset(arr) memset(arr,0,sizeof arr);
vector<vector<ll> >vec(105),cost(105);
ll  weight [105];
struct node
{
    ll a,b;
    bool operator <(node p)const
    {
        return b>p.b;
    }
};
void bfs(ll n,ll t)
{
    for(ll i=0; i<=n; i++)
    {
        weight[i]=inf;
    }
    weight[t]=0;
    node x;
    x.a=t;
    x.b=0;
    priority_queue<node>q;
    q.push(x);
    while(q.empty()!=1)
    {
        ll a=q.top().a;
        q.pop();
        for(ll i=0; i<vec[a].size(); i++)
        {
            ll y=vec[a][i];
            if(weight[y]>weight[a]+cost[a][i])
            {
                weight[y]=weight[a]+cost[a][i];
                x.a=y,x.b=weight[y];
                q.push(x);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll g,k=0;
    cin>>g;
    while(g--)
    {
        if(k==1) cout<<endl;
        ll n,e,t,m;
        cin>>n>>e>>t>>m;
        while(m--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            vec[b].push_back(a);
            cost[b].push_back(c);
        }
//        for(int i=1; i<=n; i++)
//        {
//            for(int j=0; j<vec[i].size(); j++)
//                cout<<vec[i][j]<<" ";
//            cout<<endl;
//        }
//        cout<<endl;
//        for(int i=1; i<=n; i++)
//        {
//            for(int j=0; j<cost[i].size(); j++)
//                cout<<cost[i][j]<<" ";
//            cout<<endl;
//        }
        bfs(n,e);
        ll counti=0;
        for(ll i=1; i<=n; i++)
        {
            if(weight[i]<=t)
                counti++;
           // cout<<weight[i]<<endl;
        }
        //if(k==1) cout<<endl;
        cout<<counti<<endl;
        memeset(weight);
        for(int i=0; i<=n; i++)
        {
            vec[i].clear();
            cost[i].clear();
        }
        k=1;
      // if(g!=0) cout<<endl;
    }


    return 0;
}

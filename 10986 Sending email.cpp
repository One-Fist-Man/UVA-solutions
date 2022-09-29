#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr) memset(arr,0,sizeof arr);
#define inf 10000000000
struct node
{

    ll a,b;
    bool operator < ( node p) const
    {
        return b>p.b;
    }
};
vector<vector<ll> >vec(20015),cost(20015);
ll dis[20015];

void dijkstra(ll start,ll n)
{
    for(ll i=0; i<=n; i++)
        dis[i]=inf;
    //cout<<dis[2]<<endl;
    priority_queue<node>pq;
    node x;
    x.a=start,x.b =0;
    pq.push(x);
    dis[start]=0;
    while(pq.empty()!=1)
    {
      node g=pq.top();
        ll p=g.a;
        pq.pop();

        for(ll i=0; i<vec[p].size(); i++)
        {
            ll y=vec[p][i];
           // cout<<dis[y]<<endl;

            if(dis[y]>dis[p]+cost[p][i])
            {
                //cout<<dis[y]<<endl;
                dis[y]=dis[p]+cost[p][i];
                node v;
                v.a=y,v.b=dis[y];
                pq.push(v);
            }
        }

    }

}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //ofstream fil;
   // fil.open("input.txt");

    ll t;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        ll n,m,s,t;
        cin>>n>>m>>s>>t;
        while(m--)
        {
            //cout<<111<<endl;
            ll a,b,w;
            cin>>a>>b>>w;
            vec[a].push_back(b);
            vec[b].push_back(a);
            cost[a].push_back(w);
            cost[b].push_back(w);
        }
        dijkstra(s,n);
        cout<<"Case #"<<i<<": ";
        if(dis[t]!=inf)
        cout<<dis[t]<<endl;
        else cout<<"unreachable"<<endl;
        for(ll i=0; i<=n; i++)
        dis[i]=0;
        for(ll i=0;i<=n;i++)
        {
            vec[i].clear();
            cost[i].clear();
        }

    }

    return 0;
}

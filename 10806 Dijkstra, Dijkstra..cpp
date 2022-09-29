#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
struct node
{
    ll a,b;
    node(ll _a,ll _b)
    {
        a=_a;
        b=_b;
    }
    bool operator < (node p) const
    {
        return b>p.b;
    }
};

vector<vector<ll> > vec(105);
ll weight[105],parent[105];
map< pair<ll,ll>,ll > cost;
ll dijkstra(ll a,ll n)
{
    memeset(weight,0);
    for(ll i=0;i<=n;i++) weight[i]=inf;
    memeset(parent,0);
    priority_queue<node>q;
    q.push(node(a,0));
    weight[a]=0;
    while(q.empty()!=1)
    {
        node x=q.top();
        q.pop();
        for(ll i=0; i<vec[x.a].size(); i++)
        {
            ll y=vec[x.a][i];
            pair<ll,ll>g;
            g=make_pair(x.a,y);
            if(weight[y]>cost[g]+weight[x.a]&&cost[g]!=0)
            {
                weight[y]=cost[g]+weight[x.a];
                q.push(node(y,weight[y]));
                parent[y]=x.a;
                if(y==n)
                    return 1;
            }
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n;
    while(cin>>n)
    {
        if(n==0) return 0;
        ll m;
        cin>>m;
        while(m--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            vec[a].push_back(b);
            vec[b].push_back(a);
            cost[make_pair(a,b)]=c;
            cost[make_pair(b,a)]=c;
        }

        ll i=2,flag=0,sum=0;
        while(i--)
        {
            if(dijkstra(1,n)==0)
            {
                flag=1;
                break;
            }

            ll a=n;
            while(a!=1)
            {
                pair<ll,ll>p;
                p=make_pair(a,parent[a]);
                //cout<<cost[p]<<endl;
                //sum+=cost[p];
                cost[p]=0;
                p=make_pair(parent[a],a);
                cost[p]=0;
                // cost[parent[a].second][a]=0;
                a=parent[a];
                // for(ll i=0;i<n;i++) cout<<parent[i].first<<" "<<parent[i].second<<endl;
            }
            sum+=weight[n];
        }
        if(flag==1)
            cout<<"Back to jail"<<endl;
        else
            cout<<sum<<endl;
        cost.clear();
        for(ll i=0; i<=n+1; i++)
            vec[i].clear();
    }
    return 0;
}

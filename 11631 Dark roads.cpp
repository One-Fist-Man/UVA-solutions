#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
struct node
{
    ll a,b;
    node (ll _a,ll _b)
    {
        a=_a;
        b=_b;
    }
    bool operator < (node q) const
    {
        return b>q.b;
    }
};
vector<vector<ll> > vec(200005),cost(200005);
ll visit[200005],path[200005];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ofstream fil;
    fil.open("input.txt");
    ll n,m;
    while(cin>>n>>m)
    {
        if(!n&&!m) return 0;
        ll all=0,sum=0;
        ll g=m;
        while(m--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            vec[a].push_back(b);
            vec[b].push_back(a);
            cost[a].push_back(c);
            cost[b].push_back(c);
            all+=c;
        }

        for(ll i=0; i<n; i++)
        {
            path[i]=inf;
            visit[i]=0;
        }
        priority_queue<node>q;
        q.push(node(0,0));
        path[0]=0;
        while(q.empty()!=1)
        {
            node x=q.top();
            q.pop();
            if(visit[x.a])
                continue;
            sum+=x.b;
            visit[x.a]=1;
            for(ll i=0; i<vec[x.a].size(); i++)
            {
                ll y=vec[x.a][i];
                if(visit[y])
                    continue;
                if(path[y]>cost[x.a][i])
                {
                    path[y]=cost[x.a][i];
                    q.push(node(y,path[y]));
                }
            }
        }
        ll p=all-sum;
        fil<<p<<endl;
        memeset(visit,0);
        memeset(path,0);
        for(ll i=0;i<vec.size();i++)
        {
            vec[i].clear();
        }
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000

vector< vector<ll> > vec(105),cost(105);
ll snd[105],path[105],visit[105];

struct node
{
    ll a,b;
    node (ll _a,ll _b)
    {
        a=_a;
        b=_b;
    }
    bool operator < (node p) const
    {
        return b>p.b;
    }

};
void mst(ll a,ll b,ll c)
{
    memeset(path,-1);
    memeset(visit,0);
    // cout<<path[0]<<endl;

    for(ll i=1; i<=c; i++)
        snd[i]=inf;
    priority_queue<node>q;
    q.push(node(a,0));
    snd[a]=0;
    path[a]=-1;
    while(q.empty()!=1)
    {
        node x=q.top();
        q.pop();
        if(x.a==b)
            break;
        if(visit[x.a])
            continue;
        visit[x.a]=1;
        //  cout<<x.a<<endl;
        for(ll i=0; i<vec[x.a].size(); i++)
        {

            ll y=vec[x.a][i];
            //cout<<y<<endl;
            if(visit[y])
                continue;


            if(snd[y]>cost[x.a][i])
            {
                // cout<<1<<endl;
                snd[y]=cost[x.a][i];
                path[y]=x.a;
                q.push(node(y,snd[y]));
            }
        }
    }
    ll maxi=0;
    // cout<<path[b]<<endl;
    ll i=b;
    while(path[i]!=-1)
    {
        if(maxi<snd[i])
            maxi=snd[i];
        i=path[i];
        //cout<<2<<endl;

    }
    if(path[b]==-1)
        cout<<"no path"<<endl;
    else
        cout<<maxi<<endl;


}
int  main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll c,s,q,l=1;

    while(cin>>c>>s>>q)
    {
        if(!c&&!s&&!q) return 0;
        if(l>1) cout<<endl;
        while(s--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            vec[a].push_back(b);
            vec[b].push_back(a);
            cost[a].push_back(c);
            cost[b].push_back(c);
        }
        cout<<"Case #"<<l++<<endl;

        while(q--)
        {
            ll a,b;
            cin>>a>>b;
            mst(a,b,c);
        }
        for(ll i=1; i<=c; i++)
        {
            vec[i].clear();
            cost[i].clear();
        }
    }


    return 0;
}

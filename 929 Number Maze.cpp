#include<bits/stdc++.h>
using namespace std ;
#define ll long long
#define memset(arr) memset(arr,0,sizeof arr);
#define inf 1000000000

struct node
{
    ll a,b,c;
    bool operator < (node p)
    const
    {
        return c>p.c;
    }
};
ll x[5]= {-1,0,0,1};
ll y[5]= {0,-1,1,0};
ll ans[1005][1005];
ll arr[1005][1005];
void bfs( ll n,ll m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            ans[i][j]=inf;
        }
    }
    ans[0][0]=arr[0][0];
    priority_queue<node>q;

    node p;
    p.a=0,p.b=0,p.c=arr[0][0];

    q.push(p);

    while(q.empty()!=1)
    {
        p=q.top();
        q.pop();

        ll a=p.a,b=p.b,c=p.c;
        for(ll i=0; i<4; i++)
        {

            ll d=a+x[i],e=b+y[i];
            if(d>-1&&d<n&&e<m&&e>-1)
            {
                //cout<<ans[d][e]<<endl;
                if(ans[d][e]>ans[a][b]+arr[d][e])
                {

                    ans[d][e]=ans[a][b]+arr[d][e];

                    node g;
                    g.a=d,g.b=e,g.c=ans[d][e];
                    q.push(g);
                }
            }

        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        bfs(n,m);
        cout<<ans[n-1][m-1]<<endl;
        memset(arr);
        memset(ans);
        //cout<<ans[n-1][m-1];
    }


    return 0;
}

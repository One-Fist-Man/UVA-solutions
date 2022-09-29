#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
ll x[8]= {0,0,1,-1,-1,1,-1,1};
ll y[8]= {-1,1,0,0,-1,1,1,-1};
char arr[105][105];
ll visit[105][105];
struct node
{
    ll a,b;
    node(ll _a,ll _b)
    {
        a=_a,b=_b;
    }
};
ll bfs(ll i,ll j,char c)
{
    ll counti=1;
    queue<node>q;
    q.push(node(i,j));
    visit[i][j]=1;
    while(q.empty()!=1)
    {
        node p=q.front();
        q.pop();
        for(ll i=0; i<8; i++)
        {
            ll a=p.a+x[i];
            ll b=p.b+y[i];
            if(arr[a][b]=='*'&&!visit[a][b])
            {
                counti++;
                q.push(node(a,b));
                visit[a][b]=1;
            }
        }
    }
    if(counti==1)
        return 1;
    else
        return 0;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,m;
    while(cin>>n>>m)
    {
        if(!n&&!m) return 0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }

        ll counti=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                if(!visit[i][j]&&arr[i][j]=='*')
                {
                    counti+=bfs(i,j,'*');
                }
            }
        }
        memeset(visit,0);
        memeset(arr,'.');
        cout<<counti<<endl;

    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
ll x[4]= {0,0,1,-1};
ll y[4]= {-1,1,0,0};
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
void bfs(ll i,ll j,char c)
{
    ll counti=1;
    queue<node>q;
    q.push(node(i,j));
    visit[i][j]=1;
    while(q.empty()!=1)
    {
        node p=q.front();
        q.pop();
        for(ll i=0; i<4; i++)
        {
            ll a=p.a+x[i];
            ll b=p.b+y[i];
            if(arr[a][b]=='x'&&!visit[a][b])
            {
                q.push(node(a,b));
                visit[a][b]=1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t,g=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }
        ll counti=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(!visit[i][j]&&arr[i][j]=='x')
                {
                    bfs(i,j,'x');
                    counti++;
                }
            }
        }
        memeset(visit,0);
        memeset(arr,'.');
        cout<<"Case "<<g++<<": "<<counti<<endl;
    }

    return 0;
}

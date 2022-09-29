#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
ll x[8]= {0,0,-1,1,-1,-1,1,1};
ll y[8]= {-1,1,0,0,-1,1,-1,1};
char arr[1005][1005];
ll visit[1005][1005];

struct node
{
    ll a,b;
    node (ll _a,ll _b)
    {
        a=_a;
        b=_b;
    }
};
void bfs(ll i,ll j)
{
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
            if(!visit[a][b]&&arr[a][b]=='1')
            {
                //cout<<a<<" "<<b<<endl;
                q.push(node(a,b));
                visit[a][b]=1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,k=1;
    while(cin>>n)
    {
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
                if(arr[i][j]=='1'&&!visit[i][j])
                {
                    counti++;
                    bfs(i,j);
                }
            }
        }
        cout<<"Image number "<<k++<<" contains "<<counti<<" war eagles."<<endl;
        memeset(arr,'0');
        memeset(visit,0);
    }


    return 0;
}

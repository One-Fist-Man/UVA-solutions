#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
char arr[105][105];
ll x[8]= {0,0,-1,1,1,-1,-1,1};
ll y[8]= {-1,1,0,0,-1,-1,1,1};
ll n,m;
ll visit[105][105];
ll ans=0;
void bfs(ll a,ll b)
{
    if(arr[a][b]=='@'&&visit[a][b]==0)
    {
        ll counti=0;
        queue<pair<ll,ll> >q;
        q.push(make_pair(a,b));
        visit[a][b]=1;
        while(q.empty()!=1)
        {
            pair<ll,ll>g;
            g=q.front();
            q.pop();
            counti++;
            for(ll i=0; i<8; i++)
            {
                ll c,d;
                c=g.first+x[i];
                d=g.second+y[i];

                if(c>-1&&c<n&&d>-1&&d<m&&visit[c][d]==0&&arr[c][d]=='@')
                {
                    visit[c][d]=1;
                    q.push(make_pair(c,d));
                }

            }
        }
        ans++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //ll n,m;
    ofstream fil;
    fil.open("input.txt");
    while(cin>>n>>m)
    {
        if(!n&&!m) return 0;
        // char arr[n+1][m+1];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                bfs(i,j);
            }
        }
        cout<<ans<<endl;
        ans=0;
        memeset(arr,'a');
        memeset(visit,0);
    }

    return 0;
}

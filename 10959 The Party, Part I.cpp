#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);

ll visit[1005];
ll level[1005];
void bfs(vector< vector<ll> >vec)
{
    visit[0]=1;
    level[0]=0;
    queue<ll>q;
    q.push(0);
    while(q.empty()!=1)
    {
        ll x=q.front();
        q.pop();
        for(ll i=0; i<vec[x].size(); i++)
        {
            ll y=vec[x][i];
            if(!visit[y])
            {
                q.push(y);
                level[y]=level[x]+1;
                visit[y]=1;
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
        vector< vector<ll> >vec(1005);
        ll p,d;
        cin>>p>>d;
        while(d--)
        {
            ll a,b;
            cin>>a>>b;
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
        bfs(vec);
        for(ll i=1; i<p; i++)
            cout<<level[i]<<endl;
        memeset(visit,0);
        memeset(level,0);
        if(t!=0) cout<<endl;

    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
vector<vector<ll> > vec(205);
ll visit[205];
//vector<vector<ll> > visit2(205);
ll bfs(ll a,ll counti2)
{
    queue<ll>q;
    q.push(a);
    for(ll k=0; k<vec[a].size(); k++)
    {
        ll y=vec[a][k];
        q.push(y);
        counti2++;
    }
    while(q.empty()!=1)
    {
        ll x=q.front();
        q.pop();
        visit[x]=1;
    }
    return counti2;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    ofstream fil;
//    fil.open("input.txt");
    ll t;
    cin>>t;
    while(t--)
    {
        //cout<<p++<<endl;
        ll n,m;
        cin>>n>>m;
        for(ll i=0; i<m; i++)
        {
            ll a,b;
            cin>>a>>b;
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
        ll ans=INT_MAX,flag=0;
        for(ll i=0; i<n; i++)
        {
            ll counti=0,counti2=0;
            visit[i]=1;
            for(ll j=0; j<vec[i].size(); j++)
            {
                visit[vec[i][j]]=1;
                counti2++;
            }
            counti++;
            for(ll j=0; j<n; j++)
            {
                if(!visit[j])
                {
                    counti2=bfs(j,counti2);
                    counti++;
                }
            }
           // cout<<"    "<<counti2<<endl;
            if(counti2!=m)
                counti=-1;
            if(counti!=-1)
            {
                //cout<<"  "<<counti<<endl;
                if(counti<ans)
                    ans=counti;
            }
            memeset(visit,0);
        }
        if(ans!=INT_MAX)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
        for(ll i=0; i<=n; i++)
            vec[i].clear();
    }
    return 0;
}

/*
6 7
0 1
0 2
0 5
1 2
1 5
2 3
3 4


8 11
0 1
0 4
0 5
0 6
1 4
1 6
2 6
2 7
3 5
3 7
4 6
3 2
0 2
1 2

*/

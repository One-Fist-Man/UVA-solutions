#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000

/// bfs algorthm
//ll visit[50005];
//vector<vector<ll> > vec(50005);
//void bfs(ll a)
//{
//    queue<ll>q;
//    q.push(a);
//    visit[a]=1;
//    while(q.empty()!=1)
//    {
//        ll x=q.front();
//        q.pop();
//        for(ll i=0;i<vec[x].size();i++)
//        {
//            ll y=vec[x][i];
//            if(!visit[y])
//            {
//                q.push(y);
//                visit[y]=1;
//            }
//        }
//    }
//}
//ll main()
//{
//    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    ll n,m,g=1;
//    while(cin>>n>>m)
//    {
//        if(!n&&!m) return 0;
//        memeset(visit,0);
//        ll counti=0;
//        while(m--)
//        {
//            ll a,b;
//            cin>>a>>b;
//            vec[a].push_back(b);
//            vec[b].push_back(a);
//        }
//
//        for(ll i=1;i<=n;i++)
//        {
//            if(!visit[i])
//            {
//                bfs(i);
//                counti++;
//            }
//        }
//        cout<<"Case "<<g++<<": "<<counti<<endl;
//        for(ll i=0;i<=n;i++) vec[i].clear();
//    }
//    return 0;
//}


 /// disjoint set algorithm
ll parent[50005];
ll Find(ll a)
{
    if(parent[a]==a)
        return a;
    else
        return parent[a]= Find(parent[a]);
}
void uni(ll a,ll b)
{
    ll p,q;
    p=Find(a);
    q=Find(b);
    if(p!=q)
        parent[q]=p;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,m,g=1;

    while(cin>>n>>m)
    {
        for(ll i=1; i<=n; i++)
            parent[i]=i;
        if(!n&&!m)
            return 0;
        ll counti=0;
        while(m--)
        {
            ll a,b;
            cin>>a>>b;
            uni(a,b);
        }
        for(ll i=1; i<=n; i++)
        {
            if(parent[i]==i)
                counti++;
        }
        cout<<"Case "<<g++<<": "<<counti<<endl;
        memeset(parent,0);
    }

    return 0;
}

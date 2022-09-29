#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
struct node
{
    ll a,b;

    bool operator < (  node p ) const
    {
        return b > p.b;      //Operator overloading
    }
};
vector< vector<ll> > vec(105);
map<pair<ll,ll>,ll>cost;
ll visit[105];
ll parent[105];
ll bfs(ll s,ll t)
{
    memeset(visit,0);
    memeset(parent,0);
    queue<ll>q;
    q.push(s);
    visit[s]=1;
    parent[s]=-1;
    while(q.empty()!=1)
    {
        ll x=q.front();
        q.pop();
        for(ll i=0; i<vec[x].size(); i++)
        {
            ll y=vec[x][i];
            pair<ll,ll>p;
            p=make_pair(x,y);
           // cout<<y<<" "<<cost[p]<<endl;

            if(visit[y]==0&&cost[p]!=0)
            {

                q.push(y);
                parent[y]=x;
                visit[y]=1;
               // cout<<y<<" "<<t<<endl;
                if(y==t)
                {
                    //cout<<"yyy"<<endl;
                    return 1;
                }

            }
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,g=1;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        ll s,t,m;
        cin>>s>>t>>m;
        while(m--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            vec[a].push_back(b);
            vec[b].push_back(a);
            pair<ll,ll> p;
            p=make_pair(a,b);
            cost[p]+=c;
            p=make_pair(b,a);
            cost[p]+=c;
        }
        ll ans=0;
        while(1)
        {
            if(bfs(s,t)==0)
                break;
            //cout<<111<<endl;
            ll i=t,mini=INT_MAX;
            while(i!=s)
            {
                pair<ll,ll>p;

                p=make_pair(i,parent[i]);
                mini=min(mini,cost[p]);
                //cout<<cost[p]<<endl;
                //cout<<i<<" "<<parent[i]<<" mini "<<mini<<endl;
                i=parent[i];
            }
            ans+=mini;
           // cout<<ans<<endl;
            i=t;
            while(i!=s)
            {
                pair<ll,ll>p;
                //cout<<i<<" "<<parent[i]<<endl;
                p=make_pair(i,parent[i]);
                cost[p]-=mini;
                p=make_pair(parent[i],i);

                cost[p]=(cost[p]-mini);
                //cout<<cost[p]<<endl;

                i=parent[i];
            }

        }
        cout<<"Network "<<g++<<endl;
        cout<<"The bandwidth is "<<ans<<"."<<endl;
        cout<<endl;
        for(ll i=0; i<105; i++)
            vec[i].clear();

        cost.clear();
        //cout<<cost.size()<<endl;

    }

    return 0;
}
/*
4
2 4 5
1 2 20
1 3 10
2 3 5
2 4 10
3 4 20

4
4 1 5
1 2 20
1 3 10
2 3 5
2 4 10
3 4 20

4
1 4 5
1 2 20
1 3 10
2 3 5
2 4 10
3 4 20
*/

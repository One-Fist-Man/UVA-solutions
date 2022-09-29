#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
typedef long long ll;
ll reg[105];
ll visit[105];
ll parent[105],val[105];

vector<vector<ll> > vec(105);
map<pair<ll,ll>,ll> cost;
ll bfs()
{
    memeset(visit,0);
    memeset(parent,0);
    memeset(val,0);
    queue<ll>q;
    visit[101]=1;
    parent[101]=-1;
    q.push(101);
   // val[101]=
    while(q.empty()!=1)
    {
        ll x=q.front();
        q.pop();
        for(ll i=0; i<vec[x].size(); i++)
        {
            ll y=vec[x][i];
            pair<ll,ll>p;
            p=make_pair(x,y);
            if(!visit[y]&&cost[p]>0&&reg[x]>0&&reg>0)
            {
               //  cout<<y<<endl;
                visit[y]=1;
                parent[y]=x;
                val[y]=i;
                q.push(y);
                if(y==102)
                    return 1;
            }
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ofstream fil;
    fil.open("input.txt");
    ll n,g=1;
    while(cin>>n)
    {
        cout<<"fff  "<<g++<<endl;
        for(ll i=1; i<=n; i++)
        {
            cin>>reg[i];
        }
        reg[101]=inf;
        reg[102]=inf;
        ll m;
        cin>>m;
        while(m--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            if(cost[make_pair(a,b)]==0)
            vec[a].push_back(b);

            cost[make_pair(a,b)]=cost[make_pair(a,b)]+c;


            // cost[a].push_back(c);
        }
        ll b,d;
        cin>>b>>d;

        while(b--)
        {
            ll a;
            cin>>a;
           if(cost[make_pair(101,a)]==0)
            vec[101].push_back(a);

            cost[make_pair(101,a)]=inf;

            //cost[101].push_back(inf);
            //reg[a]=0;
        }
        while(d--)
        {
            ll a;
            cin>>a;
             if(cost[make_pair(a,102)]==0)
            vec[a].push_back(102);
            cost[make_pair(a,102)]=inf;

            // cost[a].push_back(inf);
        }

        ll ans=0;
        while(1)
        {
            ll mini=INT_MAX;
            ll k=bfs();
            if(k==0)
                break;
            ll i=102;

            while(parent[i]!=101)
            {
                // cout<<111<<endl;

                pair<ll,ll>p;
                p=make_pair(parent[i],vec[parent[i]][val[i]]);
                //cout<<parent[i]<<" "<<vec[parent[i]][val[i]]<<endl;
                mini=min(mini,cost[p]);
                mini=min(mini,reg[parent[i]]);
                //mini=min(mini,reg[i]);
                // cout<<mini<<endl;
                i=parent[i];
            }
            //cout<<mini<<endl;
            ans+=mini;
            i=102;
            while(parent[i]!=101)
            {
                 pair<ll,ll>p;
                p=make_pair(parent[i],vec[parent[i]][val[i]]);
                cost[p]=cost[p]-mini;
                reg[parent[i]]-=mini;
                //reg[i]-=mini;
                i=parent[i];
            }
        }
        fil<<ans<<endl;

        for(ll i=0; i<=n; i++)
        {
            vec[i].clear();
        }
        vec[101].clear();
        cost.clear();
        memeset(reg,0);
        memeset(visit,0);
        memeset(parent,0);
        memeset(val,0);
    }

    return 0;
}
/*
14
50 4 14 61 66 67 28 77 17 80 63 89 81 77
47
7 10 34
11 4 70
12 2 32
13 4 15
11 2 83
6 2 86
2 8 99
1 4 27
9 7 7
14 10 40
7 14 44
8 10 24
7 4 64
10 5 64
12 4 45
11 5 24
4 3 18
5 10 30
12 3 60
2 5 74
8 2 19
2 10 95
8 13 11
4 3 76
13 4 21
9 7 97
10 9 67
12 5 98
7 5 10
10 7 90
11 12 33
4 9 2
1 6 82
3 2 41
5 8 1
11 5 41
3 10 92
5 12 51
10 12 98
14 10 73
11 12 47
3 6 27
9 12 91
8 12 99
12 13 63
8 1 4
9 8 96
2 4
5 13 7 14 6 9

*/

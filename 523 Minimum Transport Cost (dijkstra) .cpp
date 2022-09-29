#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 10000000000000
ll path[10000];
ll cost[10000];
//ofstream cout;
vector<ll>v;
vector<vector<ll> >vec(10000),pcost(10000),edge(10000);
struct node
{
    ll a,c;
    bool operator < (node p)
    const
    {
        return c>p.c;
    }
};

void dijkstra(ll a,ll b,ll len)
{
    for(ll i=1; i<=len+1; i++)
        cost[i]=inf;
    node x;
    x.a=a, x.c=0;
    cost[a]=0;
    priority_queue<node>q;
    q.push(x);
    path[a]=-1;
    while(q.empty()!=1)
    {
        x=q.top();
        q.pop();
        if(x.a==b) break;
        for(ll i=0; i<edge[x.a].size(); i++)
        {
            node p;
            p.a=edge[x.a][i];

            //cout<<cost[p.first]<<" "<<cost[x.first]<<" "<<pcost[x.first][i]<<endl;
            if(cost[p.a]>cost[x.a]+pcost[x.a][i])
            {
                // cout<<11<<endl;
                cost[p.a]=cost[x.a]+pcost[x.a][i];
                path[p.a]=x.a;
                p.c=cost[p.a];
                q.push(p);
            }
        }
    }
    cout<<"From "<<a<<" to "<<b<<" :"<<endl;

    ll i=b;
    //cout<<i<<endl;
    vector<ll>pt;

    while(i!=-1)
    {
        //cout<<i<<" ";
        pt.push_back(i);
        //cout<<1<<endl;
        i=path[i];
    }
    cout<<"Path: "<<pt[pt.size()-1];
    for(ll i=pt.size()-2; i>=0; i--)
        cout<<"-->"<<pt[i];
    cout<<endl;
    if(a==b) cout<<"Total cost : "<<cost[b]<<endl;
    else
    cout<<"Total cost : "<<cost[b]-v[b-1]<<endl;
}
ll main()
{
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //cout.open("input.txt");
    ll t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        // cout<<1<<endl;
        cin.ignore();
        cin.ignore();
        string s;
        ll j=1;
        while(getline(cin,s))
        {

            string g="";
            //cout<<s<<endl;
            for(ll i=0; i<=s.size(); i++)
            {
                if(s[i]==32||i==s.size())
                {
                    stringstream ss;
                    ss<<g;
                    ll a;
                    ss>>a;
                    vec[j].push_back(a);
                    // cout<<a<<endl;
                    g="";
                }
                else
                    g+=s[i];
            }
            j++;
            if(j>vec[1].size())
                break;
        }

        ll a,len=vec[1].size();
        // vector<vector<ll> >vec(100000);
        for(ll i=0; i<len; i++)
        {
            cin>>a;
            v.push_back(a);
        }

        for(ll i=1; i<=len; i++)
        {
            for(ll j=0; j<len; j++)
            {
                if(vec[i][j]!=-1&&i!=j+1)
                {
                    ll b;
                    b=vec[i][j]+v[j];
                    edge[i].push_back(j+1);
                    pcost[i].push_back(b);
                }
            }
        }
//        for(ll i=1; i<=len; i++)
//        {
//            for(ll j=0; j<edge[i].size(); j++)
//                cout<<i<<" --> "<<edge[i][j]<<" cost "<<pcost[i][j]<<endl;
//            cout<<endl;
//        }

        for(ll i=0; i<3; i++)
        {
            ll a,b;
            cin>>a>>b;
            dijkstra(a,b,len);
            if(i!=2)
                cout<<endl;
            memeset(path,0);
            memeset(cost,0);
        }
        v.clear();
        for(ll i=0; i<len; i++)
        {
            vec[i].clear();
            edge[i+1].clear();
            pcost[i+1].clear();
        }
        if(t!=0) cout<<endl;
    }

    return 0;
}

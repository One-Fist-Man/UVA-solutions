#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
struct node
{
    ll a,b,c;
    node (ll _a,ll _b,ll _c)
    {
        a=_a;
        b=_b;
        c=_c;
    }
//    bool operator < (node q) const
//    {
//        return c>q.c;
//    }
};
bool comp(node p,node q)
{
    return p.c<q.c;
}
//vector<vector<ll> > vec(200005),cost(200005);
vector<node> vec;
ll visit[200005],path[200005];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
     ofstream fil;
     fil.open("input.txt");
    ll n,m;
    while(cin>>n>>m)
    {
        if(!n&&!m)
            return 0;
        ll all=0,sum=0;
        while(m--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            vec.push_back(node(a,b,c));
            all+=c;
//            vec[a].push_back(b);
//            vec[b].push_back(a);
//            cost[a].push_back(c);
//            cost[b].push_back(c);
//            all+=c;

        }
        sort(vec.begin(),vec.end(),comp);
//        cout<<endl;
//
//        for(ll i=0;i<vec.size();i++)
//        {
//            node x=vec[i];
//           // printf("%d ",x.c);
//        }
      //  cout<<endl;
         sum=0;

        // visit[x.a]=1,visit[x.b]=1;
        // sum+=x.c;
        for(int i=0;i<n;i++) visit[i]=i;

        for(int i=0; i<vec.size(); i++)
        {
             node x=vec[i];
            if(visit[x.a]!=visit[x.b])
            {
                for(int j=0;j<n;j++)
                {
                    if(visit[j]==visit[x.a])
                    {
                        visit[j]=visit[x.b];
                    }
                }
                //visit[x.b]=visit[x.a];
                sum+=x.c;
               // cout<<x.c<<endl;
               // cout<<x.a<<" "<<x.b<<endl;
            }
        }
       // cout<<sum<<" "<<all<<endl;
        ll g=all-sum;
        fil<<g<<endl;
        vec.clear();
       // for(int i=0;i<n;i++) cout<<visit[i]<<endl;
    }


    return 0;
}

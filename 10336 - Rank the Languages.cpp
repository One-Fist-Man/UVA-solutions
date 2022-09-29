#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
ll x[8]= {0,0,-1,1};
ll y[8]= {-1,1,0,0};
char arr[1005][1005];
ll visit[1005][1005];
map<char,int>mp;

struct node
{
    ll a,b;
    node (ll _a,ll _b)
    {
        a=_a;
        b=_b;
    }
};
bool comp(pair<char,int> a,pair<char,int> b)
{
    if(a.second>b.second) return true;
    else if(a.second==b.second) return a.first<b.first;
    return false;

}
void bfs(ll i,ll j,char c)
{
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
            if(!visit[a][b]&&arr[a][b]==c)
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
    ll t,k=1;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        ll counti=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                if(!visit[i][j])
                {
                    mp[arr[i][j]]++;
                    bfs(i,j,arr[i][j]);
                }
            }
        }
        vector<pair<char,int> >vec;
        for(auto i=mp.begin(); i!=mp.end(); i++)
        {
            vec.push_back(make_pair(i->first,i->second));
            //cout<<i->first<<" "<<i->second<<endl;
        }
        sort(vec.begin(),vec.end(),comp);
        cout<<"World #"<<k++<<endl;
        for(int i=0;i<vec.size();i++) cout<<vec[i].first<<": "<<vec[i].second<<endl;

        //cout<<"Image number "<<k++<<" contains "<<counti<<" war eagles."<<endl;
        memeset(arr,'0');
        memeset(visit,0);
        mp.clear();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
bool comp(pair<char,ll> a, pair<char,ll> b)
{
    if(a.second>b.second)
        return a.second>b.second;
    else if(a.second==b.second)
        return a.first<b.first;

        return false;
}
ll x[5]= {0,0,1,-1};
ll y[5]= {-1,1,0,0};
char arr[55][55];
ll visit[55][55];
ll n,m;
vector<pair<char,ll> > vec;
void bfs(char c,ll i,ll j)
{
    ll counti=1;
    queue<pair<ll,ll> >q;
    q.push(make_pair(i,j));
    visit[i][j]=1;
    while(q.empty()!=1)
    {
        pair<ll,ll>p;
        p=q.front();
        q.pop();
        for(ll i=0; i<4; i++)
        {
            ll a=p.first+x[i];
            ll b=p.second+y[i];
            if(a>-1&&a<n&&b>-1&&b<m&&arr[a][b]==c&&!visit[a][b])
            {
                counti++;
                q.push(make_pair(a,b));
                visit[a][b]=1;
            }
        }
    }
    vec.push_back(make_pair(c,counti));
}
ll counti=0;
void dfs(char c,ll i,ll j)
{
    counti++;
    for(ll k=0;k<4;k++)
    {
        ll a=x[k]+i;
        ll b=y[k]+j;
        if(a>-1&&a<n&&b>-1&&b<m&&arr[a][b]==c&&!visit[a][b])
        {

            visit[a][b]=1;
            dfs(c,a,b);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ofstream fil;
    fil.open("input.txt");
    ll g=1;
    while(cin>>n>>m)
    {
        if(!n&&!m) return 0;
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
                if(visit[i][j]==1||arr[i][j]=='.')
                    continue;
                      bfs(arr[i][j],i,j);

                     //dfs part
//                    visit[i][j]=1;
//               dfs(arr[i][j],i,j);
//               vec.push_back(make_pair(arr[i][j],counti));
//               counti=0;

            }
        }
//
//    for(ll i=0;i<vec.size();i++) cout<<vec[i].first<<" "<<vec[i].second<<endl;
//  cout<<endl;
        sort(vec.begin(),vec.end(),comp);
        cout<<"Problem "<<g++<<":"<<endl;
        for(ll i=0; i<vec.size(); i++)
            cout<<vec[i].first<<" "<<vec[i].second<<endl;
        memeset(arr,'.');
        memeset(visit,0);
        vec.clear();

    }
    return 0;
}

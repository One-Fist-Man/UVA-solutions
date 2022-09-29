#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
string arr[105];
ll x[8]= {0,0,1,-1};
ll y[8]= {-1,1,0,0};
ll visit[105][105];

struct node
{
    ll a,b;
    node(ll _a,ll _b)
    {
        a=_a,b=_b;
    }
};
void bfs(ll i,ll j)
{
    ll counti=0;
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
            if(a>-1&&a<m&&b>-1&&b<n&&arr[a][b]=='*'&&!visit[a][b])
            {
                q.push(node(a,b));
                visit[a][b]=1;
                arr[a][b]='#';
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='*')
                bfs(i,j);
        }

    }
//    while(n--)
//    {
//        vector<node>vec;
//        string s;
//        ll g=0,a=0,b=0,k=0;
//        while(getline(cin,s))
//        {
//            if(s[0]=='_')
//            {
//                arr[g]=s;
//                break;
//            }
//
//            for(ll i=0; i<s.size(); i++)
//                if(s[i]=='*')
//                {
//                    // cout<<11<<endl;
//                    vec.push_back(node(g,i));
//                }
//            arr[g]=s;
//            g++;
//        }
//        for(ll i=0; i<vec.size(); i++)
//        {
//            //cout<<1<<endl;
//            bfs(vec[i],g);
//        }
//        for(ll i=0; i<=g; i++)
//        {
//            cout<<arr[i]<<endl;
//            arr[i]="";
//        }
        memeset(visit,0);

    }
    return 0;
}


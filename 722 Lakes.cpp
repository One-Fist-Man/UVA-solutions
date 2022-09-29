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
ll  bfs(ll a,ll b,ll g)
{
    ll counti=1;
    queue<node>q;
    q.push(node(a,b));
    visit[a][b]=1;
    while(q.empty()!=1)
    {
        node p=q.front();
        q.pop();
        for(ll i=0; i<4; i++)
        {
            ll a=p.a+x[i];
            ll b=p.b+y[i];
            if(a>-1&&a<g&&b>-1&&b<arr[a].size()&&arr[a][b]=='0'&&!visit[a][b])
            {
                counti++;
                q.push(node(a,b));
                visit[a][b]=1;
            }
        }
    }
    return counti;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n;
    cin>>n;
    cin.ignore();
    cin.ignore();

    while(n--)
    {
        string s;
        getline(cin,s);
        ll a=0,b=0;
        a=(s[0]-'0')*10+(s[1]-'0');
        b=(s[3]-'0')*10+(s[4]-'0');
       // cout<<a<<" "<<b<<endl;
        ll g=0,k=0;
        while(getline(cin,s))
        {
            if(s.size()==0) break;
            arr[g]=s;
            g++;
        }
            //cout<<1<<endl;
            ll counti=0;
            a--,b--;
            if(arr[a][b]=='0'&&a>-1&&b>-1)
           counti= bfs(a,b,g);
           cout<<counti<<endl;
        for(ll i=0; i<g; i++)
        {
            //cout<<arr[i]<<endl;
            arr[i]="";
        }
        memeset(visit,0);
        if(n!=0) cout<<endl;

    }
    return 0;
}

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
void bfs(node a,ll g)
{
    ll counti=1;
    queue<node>q;
    q.push(a);
    visit[a.a][a.b]=1;
    arr[a.a][a.b]='#';
    while(q.empty()!=1)
    {
        node p=q.front();
        q.pop();
        for(ll i=0; i<4; i++)
        {
            ll a=p.a+x[i];
            ll b=p.b+y[i];
            if(a>-1&&a<g&&b>-1&&b<arr[a].size()&&arr[a][b]==' '&&!visit[a][b])
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
    ll n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        vector<node>vec;
        string s;
        ll g=0,a=0,b=0,k=0;
        while(getline(cin,s))
        {
            if(s[0]=='_')
            {
                arr[g]=s;
                break;
            }

            for(ll i=0; i<s.size(); i++)
                if(s[i]=='*')
                {
                    // cout<<11<<endl;
                    vec.push_back(node(g,i));
                }
            arr[g]=s;
            g++;
        }
        for(ll i=0; i<vec.size(); i++)
        {
            //cout<<1<<endl;
            bfs(vec[i],g);
        }
        for(ll i=0; i<=g; i++)
        {
            cout<<arr[i]<<endl;
            arr[i]="";
        }
        memeset(visit,0);

    }
    return 0;
}
/*
2
XXXXXXXXX
X   X   X
X   *   X
X   X   X
XXXXXXXXX
X   X
X   X
X   X
XXXXX
_____
XXXXX
X   X
X * X
X   X
XXXXX
_____
*/

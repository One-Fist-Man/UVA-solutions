#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
string arr[105];
ll x[8]= {0,0,1,-1,-1,1,-1,1};
ll y[8]= {-1,1,0,0,-1,1,1,-1};
ll visit[105][105];

struct node
{
    ll a,b;
    node(ll _a,ll _b)
    {
        a=_a,b=_b;
    }
};
ll bfs(ll i,ll j,ll g,ll n)
{
    ll counti=1;
    queue<node>q;
    q.push(node(i,j));
    visit[i][j]=1;
    while(q.empty()!=1)
    {
        node p=q.front();
        q.pop();
        for(ll i=0; i<8; i++)
        {
            ll a=p.a+x[i];
            ll b=p.b+y[i];
            if(a>-1&&a<g&&b>-1&&b<n&&arr[a][b]=='W'&&!visit[a][b])
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
        ll g=0;
        while(getline(cin,s))
        {
            if(s[0]!='L'&&s[0]!='W')
                break;
            arr[g]=s;
            g++;
        }
        ll k=arr[0].size();

        while(1)
        {
            ll a=0,b=0;
            string p="";
            for(ll i=0; i<s.size(); i++)
            {
                if(s[i]==' ')
                {
                    for(ll j=0; j<p.size(); j++)
                        a=a*10+(p[j]-'0');

                    p="";
                }
                else
                    p+=s[i];
                   // cout<<p<<endl;
            }
            for(ll j=0; j<p.size(); j++)
                b=b*10+(p[j]-'0');
            //cout<<a<<" "<<b<<endl;

            ll counti=0;
            a--,b--;
            if(arr[a][b]=='W')
                counti=bfs(a,b,g,k);
            cout<<counti<<endl;
            memeset(visit,0);
            getline(cin,s);
            if(s=="")
                break;
        }
        for(ll i=0;i<=g;i++)
        {
            arr[i]="";
        }

        if(n!=0) cout<<endl;

    }


    return 0;
}

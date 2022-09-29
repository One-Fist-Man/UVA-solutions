#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(visit,a) memset(visit,a,sizeof visit);
#define inf 1000000000000000
#define siz 100005
#define all(x) x.begin(),x.end()
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fri(n) for(ll i=0;i<n;i++)
#define frj(n) for(ll j=0;j<n;j++)
string s[17];
ll visit[17][17],cnt=0,k=1;
ll n;
bool isSafe(ll cl,ll pos)
{
    for(ll i=cl; i>=0; i--)
        if(visit[i][pos]==1)
            return false;

    for(ll i=cl,j=pos; i>=0; i--,j++)
        if(visit[i][j]==1)
            return false;

    for(ll i=cl,j=pos; i>=0; i--,j--)
        if(visit[i][j]==1)
            return false;

    return true;

}
void NQ(ll pos)
{
    if(pos==n)
    {
        cnt++;
        return;
    }
    for(ll i=0; i<n; i++)
    {
        if(s[pos][i]=='.')
        {
            if(isSafe(pos,i))
            {
                visit[pos][i]=1;
                NQ(pos+1);
                visit[pos][i]=0;
            }
        }
    }
}
void solve()
{
    while(cin>>n)
    {
        if(n==0) return ;
        for(ll i=0; i<n; i++)
            cin>>s[i];
        NQ(0);
        cout<<"Case "<<k++<<": "<<cnt<<endl;
        memeset(visit,0);
        cnt=0;
    }
}
int main()
{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
    solve();
//    }

    return 0;
}

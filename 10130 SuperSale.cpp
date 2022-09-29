#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
#define siz 100005
#define all(x) x.begin(),x.end()
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fri(n) for(ll i=0;i<n;i++)
#define frj(n) for(ll j=0;j<n;j++)
ll knapsack(ll wt[],ll pft[],ll n,ll s)
{
    ll ans[n+2][s+2];
    for(ll i=0; i<=n; i++)
    {
        for(ll j=0; j<=s; j++)
        {
            if(i==0||j==0)
                ans[i][j]=0;
            else if(j-wt[i-1]>=0)
            {
                ans[i][j]=max(ans[i-1][j],ans[i-1][j-wt[i-1]]+pft[i-1]);
            }
            else
                ans[i][j]=ans[i-1][j];
        }
    }

//    for(int i=0; i<=n; i++)
//    {
//        for(int j=0; j<=s; j++)
//        {
//            cout<<ans[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    return ans[n][s];
}
void solve()
{
    ll n;
    cin>>n;
    ll wt[n+2],pft[n+2];
    fri(n)
    {
        cin>>pft[i]>>wt[i];
    }
    ll g,sum=0;
    cin>>g;
    while(g--)
    {
        ll a;
        cin>>a;
        sum+=knapsack(wt,pft,n,a);
    }
    cout<<sum<<endl;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }

    return 0;
}

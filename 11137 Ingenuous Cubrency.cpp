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
ll dpp[25][10010];
ll coinway(ll arr[],ll m,ll n)
{
    for(ll i=0;i<=n;i++) dpp[0][i]=0;
    dpp[0][0]=1;
    for(ll i=1;i<=m;i++)
    {
        for(ll j=0;j<=n;j++)
        {
            if(j<arr[i-1]) dpp[i][j]=dpp[i-1][j];
            else dpp[i][j]=dpp[i-1][j]+dpp[i][j-arr[i-1]];
        }
    }
    return dpp[m][n];
}
//ll coinway(ll arr[],ll m,ll n)
//{
//    if(n==0)
//        return 1;
//    if(m<=0||n<0)
//        return 0;
//    if(dpp[m][n]!=-1)
//        return dpp[m][n];
//    ll a=0,b=0;
//    if(n-arr[m-1]>=0)
//        a=coinway(arr,m,n-arr[m-1]);
//    b=coinway(arr,m-1,n);
//    dpp[m][n]=a+b;
//    return dpp[m][n];
//}
void solve()
{
    ll arr[22];
    for(int i=1; i<22; i++)
        arr[i-1]=(i*i*i);
//    for(int i=1; i<22; i++)
//        cout<<arr[i-1]<<" ";
        ll n;
        memeset(dpp,-1);
    while(cin>>n)
    {
        cout<<coinway(arr,21,n)<<endl;
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

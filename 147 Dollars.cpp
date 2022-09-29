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
ll dpp[15][100000];
//ll coinway(ll arr[],ll m, ll n)
//{
//   for(ll i=0;i<=n;i++) dpp[0][i]=0;
//    dpp[0][0]=1;
//   for(ll i=1;i<=m;i++)
//   {
//       for(ll j=0;j<=n;j++)
//       {
//           if(j-arr[i-1]<0) dpp[i][j]=dpp[i-1][j];
//           else dpp[i][j]=dpp[i-1][j]+dpp[i][j-arr[i-1]];
//       }
//   }
//   return dpp[m][n];
//}
ll coinway(ll arr[],ll m, ll n)
{
 // cout<<n<<" ";
    if(n==0)
        return 1;
    if(m<=0||n<0)
        return 0;
    if(dpp[m][n]!=-1)
        return dpp[m][n];
        ll a=0,b=0;
    if(n-arr[m-1]>=0)
       a=coinway(arr,m,n-arr[m-1]);
     b=coinway(arr,m-1,n);
    dpp[m][n]=a+b;
   // cout<< dpp[m][n]<<" ";
    return dpp[m][n];

}
void solve()
{
    memeset(dpp,-1);
    ll arr[11]= {5,10,20,50,100,200,500,1000,2000,5000,10000};
    double n;
    while(cin>>n)
    {
        if(n==0)
            return ;
        double a=n;
        n*=100;
        //cout<<n<<endl;
        std::cout << std::setw(6)<<setprecision(2)<<fixed<<a;
        std::cout << std::setw(17)<<coinway(arr,11,n+.5)<<endl;
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

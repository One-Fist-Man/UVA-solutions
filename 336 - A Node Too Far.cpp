#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
#define siz 100005
#define loop(a,n) for(int i=a;i<n;i++)
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n;
    cin>>n;
    ll arr[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ll counti=0;
    for(int i=0;i<n-1;i++)
    {
        ll a=abs(arr[i]-arr[i+1]);
        counti+=a;
    }
    cout<<counti<<endl;
    return 0;
}

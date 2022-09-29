//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll f91(ll n)
//{
//    ll a=0;
//    cout<<n<<endl;
//
//    if(n<=100)
//        a= f91(f91(n+11));
//    else if(n>=101)
//        a= n-10;
//
//    return a;
//}
//int main()
//{
//    ll n,i=1;
//    while(cin>>n)
//    {
//        if(n==0) return 0;
//        ll a=f91(n);
//        cout<<"f91("<<n<<") = "<<a<<endl;
//    }
//
//
//
//
//    return 0;
//}
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
ll f91(ll n)
{
    //cout<<n<<endl;
    if(n<=100) n=f91( f91(n+11) );
    else if(n>=101) n-=10;
    return n;
}
void solve()
{
    ll n;
    while(cin>>n)
    {
        if(n==0) break;
       cout<<"f91("<<n<<") = "<<f91(n)<<endl;
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

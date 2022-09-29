#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll lcm(ll n,ll m)
{
    ll l=((n/__gcd(n,m))*m);
    return l;
}
int main()
{
    ll n;
    cin>>n;
    ll sum=1;
    for(ll i=2;i<=n;i++)
    {
        sum=lcm(sum,i);
    }
    cout<<sum<<endl;

    return 0;
}

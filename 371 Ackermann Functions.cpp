#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,ll>mp;
ll counti=0;
ll fun (ll n)
{
    if(n==1||mp[n]!=0)
    {
        counti=mp[n]
        return counti;
    }
    else
    {
        if(n%2==0) n=n/2;
        else n=(n*3)+1;
    }
    fun(n);
    counti++;
    mp[n]=counti;


}
int main()
{
    ll a,b;
    cin>>a>>b;
    if(a>b) swap(a,b);

    for(int i=a;i<=b;i++)
    {

    }
    return 0;
}

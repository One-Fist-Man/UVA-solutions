#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bigmod(ll x,ll y,ll n)
{
    if(y==0)
        return 1;
    ll a=bigmod(x,y/2,n);
    a=(a*a)%n;
    if(y%2==1)
        a=(a*x)%n;
    return a;
}
int main()
{

    int t;
    while(cin>>t&&t!=0)
    {
        while(t--)
        {
            ll x,y,n;
            cin>>x>>y>>n;

            cout<<bigmod(x,y,n)<<endl;
        }
    }


    return 0;
}

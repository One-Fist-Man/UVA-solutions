#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll a,b;
       cin>>a>>b;
       a=a-2;
       b=b-2;
       a=ceil(a/3.0);
       b=ceil(b/3.0);
       cout<<a*b<<endl;
    }
    return 0;
}

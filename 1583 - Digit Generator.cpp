#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<ll>vec(100000,0);

    for(ll i=1; i<=100000; i++)
    {
        ll a,b,c,d,e,f;
        a=i;
        b=a%10;
        a=a/10;
        c=a%10;
        a=a/10;
        d=a%10;
        a=a/10;
        e=a%10;
        a=a/10;
        f=a%10;
        a=a/10;
        ll val=a+b+c+d+e+f;
        if(vec[val+i]==0) vec[val+i]=i;
    }
    ll t;
    cout<<0x3f3f3f3f3f3f3f3f<<endl;
    cin>>t;
    while(t--)
    {
        ll n,val=0;
        cin>>n;
        cout<<vec[n]<<endl;
    }

    return 0;
}

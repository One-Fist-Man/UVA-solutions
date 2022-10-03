#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        ll n,sum1=0,sum2=0;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll x;cin>>x;
            ll a=ceil(x/29.0);
            cout<<a<<endl;
            a*=10;
            sum1+=a;

            a=ceil(x/59.0);
             cout<<a<<endl;
            a*=15;
            sum2+=a;
        }
        if(sum1>sum2) cout<<"Case "<<k<<": "<<"Juice"<<" "<<sum2<<endl;
        else if(sum1<sum2) cout<<"Case "<<k<<": "<<"Mile"<<" "<<sum1<<endl;
        else cout<<"Case "<<k<<": "<<"Mile"<<" "<<"Juice"<<" "<<sum1<<endl;
    }
    return 0;
}

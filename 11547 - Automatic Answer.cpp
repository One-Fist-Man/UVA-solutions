#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a=n*567;
        a/=9;
        a+=7492;
        a*=235;
        a/=47;
        a-=498;
        a/=10;
        a=a%10;
        if(a<0)
        cout<<a*-1<<endl;
        else cout<<a<<endl;
    }

    return 0;
}

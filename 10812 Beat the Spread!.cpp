#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n<k||(n-k)%2==1)
            cout<<"impossible"<<endl;
        else
        {
            ll a=n-k;
            a/=2;
            cout<<(a+k)<<" "<<a<<endl;
        }
    }



    return 0;
}

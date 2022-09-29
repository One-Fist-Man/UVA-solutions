#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int bigmod(ll b,ll p,ll m)
{
    if(p==0) return 1;

    int x=bigmod(b,p/2,m);
    x=(x*x)%m;
    if(p%2==1) x=(b*x)%m;
    return x;

}
int main()
{

    ll  b,p,m;
    while(cin>>b>>p>>m)
    {
        cout<<bigmod(b,p,m)<<endl;
    }

    return 0;
}

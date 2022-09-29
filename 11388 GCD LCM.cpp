#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll g,l;
        cin>>g>>l;
        int a=__gcd(g,l);
        int b=(g/a)*l;
        if(a==g&&b==l)
            cout<<a<<" "<<b<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}

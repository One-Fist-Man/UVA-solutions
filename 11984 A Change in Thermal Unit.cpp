#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,p=1;
    cin>>t;
    while(t--)
    {
        double c,d;
        cin>>c>>d;
        c=((9.0/5.0)*c)+32;
        //cout<<c<<endl;
        double f=c+d;
        f=(f-32)*(5.0/9.0);
        cout<<"Case "<<p<<": "<<fixed<<setprecision(2)<<f<<endl;
        p++;
    }


    return 0;
}

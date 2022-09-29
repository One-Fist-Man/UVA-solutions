#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll p,q,r,s,t,u,counti=0;
    cin>>p>>q>>r>>s>>t>>u;
    double x=0.555,ans;
    for(double i=0.0000;i<2.0000;i+=.0001)
    {
        x=i;
        //ans=(p*exp(−x))
       ans=(p*exp(-x))+(q*sin(x))+(r*cos(x))+(s*tan(x))+(t*(x*x))+u;//;+( q * sin(x))  + (s * tan(x) ) +(t *(x*x) )+ u;
               cout<<ans<<endl;
               if(ans==0.0000) break;
    }
    //cout<<exp(x)<<endl;

    cout<<counti<<endl;

    return 0;
}

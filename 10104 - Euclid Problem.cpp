#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x,y,z;
void exeuclid(ll a,ll b)
{
    if(b==0)
    {
        x=1,y=0;
        z= a;
        return ;
    }

    exeuclid(b,a%b);
    ll x1=y,y1=x-(y*(a/b));
    x=x1;
     y=y1;
}

int main()
{
//    ofstream fil;
//    fil.open("mys.txt");
    ll a,b;
    while(cin>>a>>b)
    {
        exeuclid(a,b);
        cout<<x<<" "<<y<<" "<<z<<endl;
        x=0,y=0,z=0;
    }

    return 0;
}

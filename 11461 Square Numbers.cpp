#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        int c,d;
        if(a==0&&b==0)
            return 0;
        if(a<4)
            c=0;
        else
        {
            a=a-1;
            c=sqrt(a);
        }


        d=sqrt(b);
      // cout<<c<<" "<<d<<endl;
        cout<<d-c<<endl;
    }

    return 0;
}


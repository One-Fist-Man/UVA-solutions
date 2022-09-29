#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char dot;
    while(cin>>a>>dot>>b)
    {
        if(a==0&&b==0) return 0;

       double d=abs(((a*30)+(.5*b))-(b*6));

        double ans=min(d,360-d);

        cout<<fixed<<setprecision(3)<<ans<<endl;
    }


    return 0;
}

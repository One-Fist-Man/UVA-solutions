#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    double val,x,y,z;
    int k=1;
    while(cin>>val)
    {
        if(val==0) return 0;
        cin>>x>>y>>z;
        cout<<"Case "<<k<<": ";
        k++;
        double a,s,u,v,t;
        if(val==1)
        {
            u=x, v=y, t=z;
            s=((u+v)/2)*t;

            a=(v-u)/t;
            cout<<fixed<<setprecision(3)<<s<<" "<<a<<endl;
        }

        else if(val==2)
        {
            u=x, v=y, a=z;
            t=(v-u)/a;
            s=((u+v)/2)*t;
            cout<<s<<" "<<t<<endl;

        }

        else if(val==3)
        {
            u=x, a=y, s=z;
            v=(u*u+(2*a*s));
            v=sqrt(v);
            t=(v-u)/a;
            cout<<v<<" "<<t<<endl;
        }

        else if(val==4)
        {
            v=x, a=y, s=z;

            u=(v*v-(2*a*s));
            u=sqrt(u);
            t=(v-u)/a;
            cout<<u<<" "<<t<<endl;
        }

    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double  h,u,d,f;

    while(cin>>h>>u>>d>>f)
    {
        if(h==0) continue;
        double start=0;
       long long  counti=0;
        double k=(f/100.0);
        k*=u;
       // cout<<k<<endl;
        while(1)
        {
            start+=u;
            //cout<<i<<" "<<start<<endl;
            counti++;
            if(start>h) break;
            start-=d;
            u-=k;
            if(u<0) u=0;
           // cout<<"u "<<u<<endl;
            if(start<0) break;
        }
        if(start>h) cout<<"success on day "<<counti<<endl;
        else cout<<"failure on day "<<counti<<endl;

    }
    return 0;
}

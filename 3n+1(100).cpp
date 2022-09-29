#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long   a,b,c,d;
    while(cin>>c>>d)
    {
        a=min(c,d);
        b=max(c,d);
        long long   counti=1,maxi=0;
        for(long long   i=a; i<=b; i++)
        {
            long long  p=i,counti=1;
            while(p!=1)
            {
                 counti++;
                if(p%2==1)
                {
                    p=(p*3)+1;
                }
                else
                {
                    p=p/2;
                }

            }
            if(counti>maxi) maxi=counti;
        }

        cout<<a<<" "<<b<<" "<<maxi<<endl;

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a,k=1;
    while(cin>>n>>a)
    {
        if(n==0&&a==0) return 0;
        int counti=0;

        for(int i=1; i<=27; i++)
        {

            if(n<=a*i)
            {
                a=a*i;
                break;
            }
            counti++;
        }
       // if(counti>0)
        if(n<=a)
            cout<<"Case "<<k<<": "<<counti<<endl;
        else
            cout<<"Case "<<k<<": "<<"impossible"<<endl;
            k++;
    }


    return 0;

}

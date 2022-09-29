#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ofstream fil;
    fil.open("text.txt");

    ll a,k=1;
    while(cin>>a)
    {
        if(k<10)
        fil<<"   "<<k<<".";
        else if(k<100)
        fil<<"  "<<k<<".";
        else if(k<1000)
        fil<<" "<<k<<".";
          else
        fil<<k<<".";

        if(a/100000000000000>0)
        {
            fil<<" "<<a/100000000000000<<" kuti";
            a=a%100000000000000;
        }
        if(a/1000000000000>0)
        {
            fil<<" "<<a/1000000000000<<" lakh";
            a=a%1000000000000;
        }
        if(a/10000000000>0)
        {
            fil<<" "<<a/10000000000<<" hajar";
            a=a%10000000000;
        }
        if(a/1000000000>0)
        {
            fil<<" "<<a/1000000000<<" shata";
            a=a%1000000000;
        }
        if(a/10000000>0)
        {
            fil<<" "<<a/10000000<<" kuti";
            a=a%10000000;
        }
        if(a/100000>0)
        {
            fil<<" "<<a/100000<<" lakh";
            a=a%100000;
        }
        if(a/1000>0)
        {
            fil<<" "<<a/1000<<" hajar";
            a=a%1000;
        }
        if(a/100>0)
        {
            fil<<" "<<a/100<<" shata";
            a=a%100;
        }
        if(a>0)
        fil<<" "<<a;
        fil<<endl;
        k++;
        cout<<k<<" ";

    }
///1415953200
 return 0;
}

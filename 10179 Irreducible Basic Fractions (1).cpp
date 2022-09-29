#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

int main()
{
   ll n;
   cin>>n;
   int counti=1;
   for(ll i=0;i<n;i++)
   {
      if((__gcd(i,n))==1) counti++;
      //cout<<__gcd(,n)<<endl;
   }
    cout<<counti<<endl;
    //cout<<__gcd(0,12)<<endl;
    return 0;
}

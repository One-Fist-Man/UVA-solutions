#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   ll n;
   while(cin>>n)
   {
       if(n==0) return 0;
       ll sum=0;
   for(int i=1;i<n;i++)
   {
       for(int j=i+1;j<=n;j++)
       {
           sum+=__gcd(i,j);
       }
   }
   cout<<sum<<endl;
//gcd(2,12);
   }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   ll s,d;
   while(cin>>s>>d)
   {
       ll sum=s,i=s;
       while(sum<d)
       {
           i++;
           sum+=i;
       }
       cout<<i<<endl;
   }

    return 0;
}

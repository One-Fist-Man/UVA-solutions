#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
  ll f91(ll n,ll lev)
  {
      cout<<lev<<" level "<<n<<endl;
      if(n>=101) n=n-10;

      else n=f91(f91(n+11,lev++),lev++);



      return n;
  }
int main()
{
   ll n,lev=0;
   cin>>n;
   n=f91(n,lev);
   cout<<n<<endl;


    return 0;

}

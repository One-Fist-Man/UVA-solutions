#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 string sums(string mul,string s)
{
    reverse(mul.begin(),mul.end());
    reverse(s.begin(),s.end());
    string all="";
    int sum=0,carry=0;
    int a=mul.size(),b=s.size(),maxi=max(a,b);
   // cout<<a<<" "<<b<<endl;

    for(int i=0;i<maxi;i++)
    {
        if(i>=a)
        {
            sum=s[i]-'0';
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
           // cout<<sum<<endl;
            all+=sum+'0';
        }
      else if(i>=b)
        {
            sum=mul[i]-'0';
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
           // cout<<sum<<endl;
            all+=sum+'0';
        }
      else
        {
            sum=(s[i]-'0')+(mul[i]-'0');
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
            //cout<<sum<<endl;
            all+=sum+'0';
        }
       // all+=sum+'0';
    }

    if(carry!=0)
    all+=carry+'0';
    reverse(all.begin(),all.end());

    return all;
}

void multi(int n)
{

}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<sums(a,b);


    return 0;
}


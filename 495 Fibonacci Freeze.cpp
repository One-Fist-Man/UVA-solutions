#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    vector<string>vec;
    vec.push_back("0");
    vec.push_back("1");
    for(int i=2;i<=5005;i++)
    {
       int a=vec[i-1].size(),b=vec[i-2].size();
       int maxi=max(a,b);
       string s1=vec[i-1],s2=vec[i-2];
       reverse(s1.begin(),s1.end());
       reverse(s2.begin(),s2.end());
       string s="";
       int sum=0,car=0;
       for(int j=0;j<maxi;j++)
       {

           if(j>=a)
           {

               sum=s2[j]-'0';
               sum+=car;
               car=sum/10;
               sum=sum%10;
               s+=sum+'0';
           }
           else  if(j>=b)
           {

               sum=s1[j]-'0';
               sum+=car;
               car=sum/10;
               sum=sum%10;
               s+=sum+'0';
           }
           else
           {

               sum=(s2[j]-'0')+(s1[j]-'0');
               sum+=car;
               car=sum/10;
               sum=sum%10;
               s+=sum+'0';
           }
       }
       if(car!=0) s+=car+'0';
       reverse(s.begin(),s.end());
       vec.push_back(s);
//       cout<<s<<endl;
    }

    //for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";

    ull n;
    while(cin>>n) cout<<"The Fibonacci number for "<<n<<" is "<<vec[n]<<endl;
    return 0;
}

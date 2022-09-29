#include<bits/stdc++.h>
using namespace std;
int main()
{
//
    string s,s2;
    while(getline(cin,s),getline(cin,s2))
    {
        //cout<<s<<endl;
        int sum=0,sum2=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>=65&&s[i]<=90)
            {
                sum+=s[i]-64;
            }

            else if(s[i]>=97&&s[i]<=122)
            {
                sum+=s[i]-96;
            }
        }
        int a=0,sm=0,sm2=0;
        while(sum>10)
        {
            a=sum%10;
            sm+=a;
            sum=sum/10;
        }
        sm+=sum;
        int sk=0,sk2=0;
        a=sm%10;
        sk+=a;
        sm=sm/10;
        sk+=sm;

        //cout<<sk<<endl;
      // cout<<s2<<endl;
        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i]>=65&&s2[i]<=90)
            {
                sum2+=s2[i]-64;
            }

            else if(s2[i]>=97&&s2[i]<=122)
            {
                sum2+=s2[i]-96;
            }
        }
        while(sum2>10)
        {
            a=sum2%10;
            sm2+=a;
            sum2=sum2/10;
        }
        sm2+=sum2;
        a=sm2%10;
        sk2+=a;
        sm2=sm2/10;
        sk2+=sm2;

        //cout<<sk2<<endl;
        double maxi=max(sk,sk2),mini=min(sk,sk2),l;
        l=mini/maxi;
        l=l*100;

        cout<<fixed<<setprecision(2)<<l<<" %"<<endl;


//          while(s.length()!=0)
//            getline(cin,s);
//        while(s2.length()!=0)
//            getline(cin,s2);
    }
    return 0;
}

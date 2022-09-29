#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    ll d1,d2;
    while( cin>>s>>d1>>d2)
    {
        reverse(s.begin(),s.end());
        ll n= s.size()-1,sum=0;
        for(ll i=n; i>=0; i--)
        {
            if(s[i]>='A')
                sum+=(s[i]-55)*pow(d1,i);
            else
                sum+=(s[i]-'0')*pow(d1,i);
        }
        // cout<<sum<<endl;

        string s2="";
        while(sum!=0)
        {
            ll a=sum%d2;
            sum/=d2;
            if(a>9)
            {
                s2+=a+55;
            }
            else
                s2+=a+'0';
        }
        if(s2=="") s2+='0';
        int k=s2.size()-1;
        for(int i=0;i<7;i++)
        {
            if(i>k) s2+=32;
        }
        reverse(s2.begin(),s2.end());
         if(s2.size()>7)
            cout<<"  ERROR"<<endl;
        else
            cout<<s2<<endl;
    }

    return 0;
}

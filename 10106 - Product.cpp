#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    fstream fil;
    fil.open("text.txt");

    string x,y;
    while(cin>>x>>y)
    {
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        string all="";
        for(ll i=0; i<y.size(); i++)
        {
            string s="";
            ll carr=0;
            double sum2=0;
            ll sum=0;
            for(ll j=0; j<x.size(); j++)
            {
                ll a=y[i]-'0',b=x[j]-'0';
                sum=(a*b);
               // cout<<a<<" "<<b<<endl;
                //cout<<sum<<endl;
                sum+=carr;
                carr=sum/10;
                sum%=10;
                s+=sum+'0';
            }
            if(carr!=0) s+=carr+'0';
            reverse(s.begin(),s.end());
            for(int k=0; k<i; k++)
                s+='0';

            reverse(s.begin(),s.end());
           // cout<<s<<endl;

            int maxi=max(all.size(),s.size());
            sum=0,carr=0;
            string s2="";

            for(int k=0; k<maxi; k++)
            {

                if(k>=all.size())
                {
                    sum=s[k]-'0';
                    sum+=carr;
                    carr=sum/10;
                    sum=sum%10;
                }
                else if(k>=s.size())
                {
                    sum=all[k]-'0';
                    sum+=carr;
                    carr=sum/10;
                    sum=sum%10;
                }
                else
                {
                    sum=(all[k]-'0')+(s[k]-'0');
                    sum+=carr;
                    carr=sum/10;
                    sum=sum%10;
                }
                s2+=sum+'0';
                //cout<<" car "<<carr<<endl;

            }
            if(carr!=0) s2+=carr+'0';
            all=s2;
            //cout<<all<<endl;
        }
        reverse(all.begin(),all.end());
        if(all[0]=='0')
            cout<<0<<endl;
        else
            cout<<all<<endl;
    }


    return 0;

}


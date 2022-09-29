#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s[100],s2,s3="";
    ll i=0;
    while(cin>>s2)
    {
        if(s2=="0")
            break;
            reverse(s2.begin(),s2.end());
        s[i]=s2;
        //cout<<"s "<<s[i]<<endl;
        i++;
    }
    ll p=i;
    for(ll j=1; j<p; j++)
    {
        ll maxi=max(s[j].size(),s[j-1].size());
        s3="";
        //cout<<"max "<<maxi<<endl;
        ll car=0,sum=0,a=s[j].size(),b=s[j-1].size();
        for(ll i=0; i<maxi; i++)
        {
            if(i>=a)
            {
               // cout<<"P1 "<<i<<endl;
                sum=s[j-1][i]-'0';
                sum+=car;
                car=sum/10;
                s3+=(sum%10)+'0';
                 //cout<<s3<<endl;
            }
            else if(i>=b)
            {
               // cout<<"P2 "<<i<<endl;
                sum=s[j][i]-'0';
                sum+=car;
                car=sum/10;
                s3+=(sum%10)+'0';
                 //cout<<s3<<endl;
            }
            else
            {
                //cout<<"P4 " <<i<<endl;
                sum=(s[j][i]-'0')+(s[j-1][i]-'0');
                sum+=car;
                car=sum/10;
                s3+=(sum%10)+'0';
               // cout<<s3<<endl;
            }

        }
        if(car!=0) s3+=car+'0';
        // cout<<s3<<endl;
        s[j]=s3;
    }

    reverse(s[p-1].begin(),s[p-1].end());
    if(s[p-1][0]=='0') cout<<0<<endl;
    else
    cout<<s[p-1]<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s,s2;
        cin>>s>>s2;
        while(s[s.size()-1]=='0')
            {
                s.erase(s.begin()+(s.size()-1));
            }

            while(s2[s2.size()-1]=='0')
            {
                s2.erase(s2.begin()+(s2.size()-1));
            }
        ll maxi=max(s.size(),s2.size());
        ll a=s.size(),b=s2.size();
        string all="";
        ll sum=0,car=0;

        for(ll i=0; i<maxi; i++)
        {
            if(i>=a)
            {
                sum=(s2[i]-'0');
                sum+=car;
                car=sum/10;
                sum%=10;
                if(sum==0)
                {
                    if(all!="")
                    {
                         all+=(sum+'0');
                    }
                }
                else  all+=(sum+'0');

            }
            else if(i>=b)
            {
                sum=(s[i]-'0');
                sum+=car;
                car=sum/10;
                sum%=10;
                if(sum==0)
                {
                    if(all!="")
                    {
                         all+=(sum+'0');
                    }
                }
                else  all+=(sum+'0');
            }
            else
            {
                sum=(s[i]-'0')+(s2[i]-'0');
                sum+=car;
                car=sum/10;
                sum%=10;
                if(sum==0)
                {
                    if(all!="")
                    {
                         all+=(sum+'0');
                    }

                }
                else  all+=(sum+'0');
            }
        }
        if(car!=0)
            all+=car+'0';

            while(all[all.size()-1]=='0')
            {
                all.erase(all.begin()+(all.size()-1));
            }

        cout<<all<<endl;
    }

    return 0;
}

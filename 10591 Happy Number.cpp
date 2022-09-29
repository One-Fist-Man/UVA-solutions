#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll k=1,t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s2=s;
        ll flag=0;
        while(1)
        {
            ll sum=0;
            for(ll i=0; i<s.size(); i++)
            {
                ll a;
                a=s[i]-'0';
                sum+=a*a;
                // cout<<sum<<endl;
            }
            if(sum==1)
            {
                flag=1;
                break;
            }
            else if(sum==4)
            {
                flag=0;
                break;
            }
            else
            {
                stringstream ss;
                ss<<sum;
                ss>>s;
                //cout<<s<<endl;
            }

        }
        if(flag==1)
            cout<<"Case #"<<k<<": "<<s2<<" is a Happy number."<<endl;
        else
            cout<<"Case #"<<k<<": "<<s2<<" is an Unhappy number."<<endl;
            k++;
    }

    return 0;

}

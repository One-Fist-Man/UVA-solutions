#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        ll a;
        cin>>a;
        cin.ignore();
        while(a--)
        {
            string b;
            getline(cin,b);
            ll flag=0;
            for(ll i=0;i<=s.size()-b.size();i++)
            {
                string temp="";
                for(ll j=i;j<i+b.size();j++)
                {
                   temp+=s[j];
                }
                //cout<<b<<" "<<temp<<endl;
                if(b==temp)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            cout<<"y"<<endl;
            else cout<<"n"<<endl;
        }
    }
    return 0;
}

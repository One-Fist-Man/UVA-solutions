#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="0") return 0;
        ll a=s.size(),sum=0;
        for(ll i=0; i<s.size(); i++)
        {
            ll b=s[i]-'0';
            sum+=b*(pow(2,a)-1);
            a--;
        }
        cout<<sum<<endl;
    }



    return 0;
}

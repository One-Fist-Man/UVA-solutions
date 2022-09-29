#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n<0)
            return 0;
        string s="";
        if(n==0)
            cout<<0<<endl;
        else
        {
            while(n!=0)
            {
                s+=(n%3)+'0';
                n/=3;
            }
            reverse(s.begin(),s.end());

            cout<<s<<endl;
        }

    }

    return 0;
}

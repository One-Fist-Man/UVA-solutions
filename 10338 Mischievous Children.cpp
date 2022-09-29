#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll fact(ll n)
{
    ll sum=1;
    for(ll i=1; i<=n; i++)
    {
        sum*=i;
    }
    return sum;
}
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        map<char,int>mp;
        string s;
        cin>>s;
        int maxi=1;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        ll mul=1;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            mul*=fact(i->second);
        }
        ll n=s.size();
        ll sum=fact(n)/mul;

        cout<<"Data set "<<k<<": "<<sum<<endl;
        k++;
    }


    return 0;
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll k;
        cin>>k;
        map<char,ll>mp;
        for(ll i=0; i<k; i++)
        {
            char a;
            ll b;
            cin>>a>>b;
            mp[a]=b;
        }
        ll m;
        cin>>m;
        cin.ignore();
        string s[m];
        for(ll i=0; i<m; i++)
        {
            getline(cin,s[i]);
        }
        ll counti=0,counti2=0;
        for(ll i=0; i<m; i++)
        {
            for(ll j=0; j<s[i].size(); j++)
            {
                counti+=mp[s[i][j]];
                //cout<<"before "<<counti<<endl;
                if(counti>=100)
                {
                    ll p=counti/100;
                    counti2+=p;
                    counti=counti%100;
                }
                //cout<<"after "<<counti<<endl;

            }

        }
        if(counti>9)
        cout<<counti2<<"."<<counti<<"$"<<endl;
        else cout<<counti2<<".0"<<counti<<"$"<<endl;
        mp.clear();

    }

    return 0;
}

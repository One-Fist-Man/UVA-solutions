#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,p=1;
    cin>>t;
    while(t--)
    {
        map<char,ll>mp;
        ll r,c,m,n;
        cin>>r>>c>>m>>n;
        for(ll i=0; i<r; i++)
        {
            for(ll j=0; j<c; j++)
            {
                char a;
                cin>>a;
                mp[a]++;
            }
        }


        ll  maxi=0,maxcounti=1;

        for(auto i=mp.begin(); i!=mp.end(); i++)
        {
            if(maxi<i->second)
            {
                maxi=i->second;
                maxcounti=1;
            }
            else if(maxi==i->second)
            {
                maxcounti++;
            }
        }

        ll rem=(r*c)-(maxcounti*maxi);
        ll ans1=(maxcounti*maxi)*m;
        ll ans2=ans1+(rem*n);
        cout<<"Case "<<p<<": "<<ans2<<endl;
        p++;
    }


    return 0;
}

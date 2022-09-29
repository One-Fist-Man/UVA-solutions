#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main()
{
    ll n,m;
    while(cin>>n>>m)
    {
       if(!n&&!m) return 0;
        vector<ll>vec,vec2;

        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            vec.pb(a);
        }
        for(ll i=0; i<m; i++)
        {
            ll a;
            cin>>a;
            vec2.pb(a);
        }

        sort(vec.begin(),vec.end());
        sort(vec2.begin(),vec2.end());
        ll counti1=0,counti2=0,sum=0;
        for(ll i=0; i<vec.size(); i++)
        {
            for(ll j=counti2; j<vec2.size(); j++)
            {
                counti2++;
                if(vec[i]<=vec2[j])
                {
                    counti1++;
                    sum+=vec2[j];
                    //cout<<vec2[j]<<endl;
                    break;
                }
            }
        }
        if(counti1==n)
            cout<<sum<<endl;
        else
            cout<<"Loowater is doomed!"<<endl;

    }
    return 0;
}

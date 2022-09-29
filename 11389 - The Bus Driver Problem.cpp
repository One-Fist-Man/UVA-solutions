#include<bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
int main()
{
    ll n,d,r;
    while(cin>>n>>d>>r)
    {
       if(!n&&!d&&!r) return 0;
        vector<ll>vec,vec2;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            vec.pb(a);
        }
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            vec2.pb(a);
        }
        sort(vec.begin(),vec.end());
        sort(vec2.begin(),vec2.end(),greater<ll>());
        ll sum=0,mini=INT_MAX;
        for(ll i=0; i<n; i++)
        {
            if(vec[i]+vec2[i]>d)
            {
                ll a=vec[i]+vec2[i];
                a=a-d;

                a*=r;
                sum+=a;
                //if(a<mini) mini=a;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    while(cin>>n>>m)
    {
        int a=n,b=m;
        if(n==0&&m==0) return 0;
        ll c=n-m;
        if(c<m)
        {
            swap(c,m);
        }
        vector<ll>vec1,vec2;
        for(ll i=c+1; i<=n; i++)
        {
            vec1.push_back(i);
        }
        for(ll i=2; i<=m; i++)
        {
            vec2.push_back(i);
        }
        for(ll i=0; i<vec1.size(); i++)
        {
            for(ll j=0; j<vec2.size(); j++)
            {
                if(vec1[i]%vec2[j]==0)
                {
                    vec1[i]=vec1[i]/vec2[j];
                    vec2.erase(vec2.begin()+j);
                }
            }
        }
        ll sum1=1,sum2=1;
        for(ll i=0; i<vec1.size(); i++)
            sum1*=vec1[i];

        for(ll i=0; i<vec2.size(); i++)
            sum2*=vec2[i];

        cout<<a<<" things taken "<<b<<" at a time is "<<sum1/sum2<<" exactly."<<endl;
    }

    return 0;
}

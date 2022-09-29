#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
//#define pb push_back
//#define sf(
vector<ll>vec;
ll bin(ll a,ll n)
{
    ll l=0,h=n-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(vec[mid]==a)
            return 1;
        else if(vec[mid]>a)
        {
            h=mid-1;
        }
        else
            l=mid+1;
    }
    return 0;
}
int main()
{
    ll n;
    while(cin>>n)
    {
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            vec.push_back(a);
        }
        ll m,v1,v2,mini=INT_MAX;
        cin>>m;
        sort(vec.begin(),vec.end());
        for(ll i=0; i<n; i++)
        {
            ll a=m-vec[i];
            a=abs(a);
            ll p=bin(a,n);
            if(p==1&&mini>abs(a-vec[i]))
            {
                mini=abs(a-vec[i]);
                v1=vec[i];
                v2=a;
            }
        }
        cout<<"Peter should buy books whose prices are "<<v1<<" and "<<v2<<"."<<endl;
        vec.clear();
        cout<<endl;

    }


    return 0;
}

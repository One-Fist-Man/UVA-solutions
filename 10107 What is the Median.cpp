#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<ll> vec;
    ll n;
    while(cin>>n)
    {
        vec.push_back(n);
        sort(vec.begin(),vec.end());

        if(vec.size()%2==1)
        {
            ll a=vec.size()/2;
            cout<<vec[a]<<endl;
        }
        else
        {
            ll a=vec.size()/2;
            ll p=(vec[a-1]+vec[a])/2;
            cout<<p<<endl;

        }
    }


    return 0;
}

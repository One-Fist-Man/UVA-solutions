#include<bits/stdc++.h>
using namespace std;
#define ll  long long

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,m;
    cin>>n>>m;
    vector<ll>vec;
    vec.push_back(1);
    for(ll i=1;i<=m;i++)
    {
        ll a;
        cin>>a;
        vec.push_back(a);
    }
    ll sum=0;
    for(ll i=0;i<m;i++)
    {
        if(vec[i]<=vec[i+1])
            sum+=abs(vec[i]-vec[i+1]);
            else
            {
                sum+=abs(vec[i]-(n+vec[i+1]));
            }
    }
    cout<<sum<<endl;

    return 0;
}

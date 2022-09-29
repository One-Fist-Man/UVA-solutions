#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define fast_in_out   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define CLR(a) memset(a,0,sizeof(a))

int main()
{
    fast_in_out;
    ll n,m;
    cin>>n>>m;
    map<int,int>mp;
    vector<vector<int> >vec;
    for(int i=1;i<=n;i++) mp[i]=0;
    int mini=int_max;
    while(m--)
    {
       int a,b;
       cin>>a>>b;
       mp[b]++;
       vec[a].push_back(b);
    }


    return 0;
}

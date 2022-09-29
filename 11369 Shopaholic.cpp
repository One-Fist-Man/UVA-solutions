#include <bits/stdc++.h>

using namespace std;

#define ff                first
#define ss                second
#define pii               pair<int,int>
#define mk                make_pair
#define ll                long long
#define ull               unsigned long long
#define pb                push_back
#define fast_in_out       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    fast_in_out;
    ll t;
    cin>>t;
    while(t--)
    {
       vector<int>vec;
       ll n;
       cin>>n;
       for(int i=0;i<n;i++)
       {
          ll a;
          cin>>a;
          vec.pb(a);
       }
       sort(vec.begin(),vec.end(),greater<int>());
       ll sum=0;
       for(int i=2;i<n;i+=3) sum+=vec[i];
       cout<<sum<<endl;
    }

    return 0;
}

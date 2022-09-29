#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int lcm(int n,int a)
{
    vector<int>vec;
    for(int i=1; i*i<=n; i++)
    {
        if(i*i==n)
            vec.push_back(i);
        else if(n%i==0)
        {
            vec.push_back(i);
            vec.push_back(n/i);
        }
    }
    sort(vec.begin(),vec.end());

    for(int i=0; i<vec.size(); i++)

    {
        int lc=(vec[i]/__gcd(vec[i],a))*a;
        //cout<<lc<<endl;
        if(lc==n)
            return vec[i];
    }
    return -1;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>a>>n;
           ll ans;
        ans= lcm(n,a);
        //if(n==a ) cout<<a<<endl;
        if(ans==-1)
            cout<<"NO SOLUTION"<<endl;
        else
            cout<<ans<<endl;

    }

    return 0;
}

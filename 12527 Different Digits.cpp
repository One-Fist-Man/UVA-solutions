#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    while(cin>>n>>m)
    {
        ll counti2=0;
        for(ll i=n; i<=m; i++)
        {
            set<int>st;
            ll counti=0;
            ll p=i;
            while(p!=0)
            {
                ll a=p%10;
                st.insert(a);
                counti++;
                p/=10;
            }
            if(st.size()==counti)
                counti2++;
        }
        cout<<counti2<<endl;
    }




    return 0;
}

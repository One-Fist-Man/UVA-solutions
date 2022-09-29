#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll z,i,m,l,a=0,counti=0,k,p=1;
    while(cin>>z>>i>>m>>l)
    {
        if(z==0&&i==0&&m==0&&l==0) return 0;
        counti=0;
        map<ll,ll>mp;
        set<ll>st;
        //k=l;
        mp[l]++;

        while(mp[l]!=2)
        {
            a=(z*l)+i;
           l=a%m;
            st.insert(l);
            mp[l]++;
        }
        cout<<"Case "<<p<<": "<<st.size()<<endl;
        p++;
        //for(auto i=st.begin();i!=st.end();i++) cout<<*i<<" ";
    }

    return 0;
}

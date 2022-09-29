#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>vec,vec2;

ll val,val2;
void bin(ll a,ll n)
{
    ll l=0,h=n,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(vec[mid]==a)
        {
            if(mid-1>=0)
                val=vec[mid-1];
            else
                val=0;
            if(mid+1<n)
                val2=vec[mid+1];
            else
                val2=0;
            return ;
        }
        else if(vec[mid]>a)
        {
            h=mid-1;
            val2=vec[mid];
        }
        else
        {
            l=mid+1;
            val=vec[mid];
        }
    }

}
int main()
{
    set<ll>st;
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        st.insert(a);
    }
    for(auto it=st.begin();it!=st.end();it++)
    {
        vec.push_back(*it);
    }
    n=vec.size();
    ll q;
    cin>>q;
    for(ll i=0; i<q; i++)
    {
        ll a;
        cin>>a;
        vec2.push_back(a);
    }

    for(ll i=0; i<q; i++)
    {
        ll a=vec2[i];
        bin(a,n);
        if(val==0) cout<<"X"<<" ";
        else cout<<val<<" ";
        if(val2==0) cout<<"X"<<endl;
        else cout<<val2<<endl;;
        val=0,val2=0;

    }
    return 0;
}


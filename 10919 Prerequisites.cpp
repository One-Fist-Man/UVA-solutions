#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b;
    while(cin>>a)
    {
        if(a==0) return 0;
        cin>>b;
        ll arr[a],flag=0,flag2=0;
        for(ll i=0;i<a;i++)
            cin>>arr[i];

        for(ll i=0;i<b;i++)
        {
            ll c,d,counti=0;
            cin>>c>>d;
            for(ll j=0;j<c;j++)
            {
                ll x;
                cin>>x;
                for(ll k=0;k<a;k++)
                {
                    if(arr[k]==x)
                    {
                        flag2=1;
                        counti++;
                        break;
                    }
                }
            }

            if(counti<d) flag=1;
        }
        if(flag==1||flag2==0) cout<<"no"<<endl;
        else cout<<"yes"<<endl;

    }

    return 0;
}

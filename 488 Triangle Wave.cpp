#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll g=0;
        while(b--)
        {

            g=1;
            ll k=1,flag=0;
            for(ll i=1; i<a*2; i++)
            {
                for(ll j=0; j<k; j++)
                {
                    cout<<k;

                }
                if(k!=a&&flag==0)
                    k++;
                else
                {
                    k--;
                    flag=1;
                }
                cout<<endl;
            }
            if(t==0&&b==0) return 0;
              cout<<endl;

        }

    }

    return 0;
}

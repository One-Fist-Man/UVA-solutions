#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,flag=0;
        cin>>a>>b>>c;
        ll x[b],y[b],snake[b],lader[b];
        for(ll i=0; i<b; i++)
        {
            cin>>x[i]>>y[i];
            if(x[i]<y[i])
                lader[i]=x[i];
            else
                snake[i]=x[i];
        }

        ll k=1;
         ll p[c+1];
         for(ll i=0; i<c; i++)
            cin>>p[i];

        for(ll i=0; i<c; i++)
        {
            if(k<=a&&flag==0)
                mp[k]=1;

            mp[k]+=p[i];
            for(ll j=0; j<b; j++)
            {
                if(mp[k]==snake[j])
                {
                    mp[k]=y[j];

                }

                else if(mp[k]==lader[j])
                {
                    mp[k]=y[j];

                }
            }
            if(mp[k]>=100)
            {
                mp[k]=100;
                break;
            }

            k++;
            if(k>a)
            {
                k=1;
                flag=1;
            }

        }

        for(ll i=1; i<=a; i++)
        {
            if(i>mp.size())
                cout<<"Position of player "<<i<<" is "<<1<<"."<<endl;
            else
                cout<<"Position of player "<<i<<" is "<<mp[i]<<"."<<endl;
        }
        mp.clear();
    }


    return 0;
}

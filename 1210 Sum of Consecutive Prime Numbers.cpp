#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define n 10001
ll arr[n];
int main()
{
    vector<ll>vec;
    for(ll i=2; i*i<=n; i++)
    {
        if(arr[i]==0)
        {
            for(ll j=i*i; j<=n; j+=i)
                arr[j]=1;
        }
    }
    for(ll i=2; i<=n; i++)
    {
        if(arr[i]==0)
            vec.push_back(i);
    }
    ll a;
    while(cin>>a)
    {
        if(a==0) return 0;

            ll b=a,j=0,counti=0;
            while(vec[j]<=a)
            {
                ll sum=0;
                for(ll i=j; a>=vec[i]; i++)
                {
                    sum+=vec[i];
                    //cout<<sum<<endl;
                    if(sum>a)
                        break;
                    if(sum==a)
                    {
                        counti++;
                        break;
                    }
                }
                j++;
                //cout<<counti<<endl;
            }
            cout<<counti<<endl;

    }


    return 0;
}

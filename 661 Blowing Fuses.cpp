#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,c,k=1;
    while(cin>>n>>m>>c)
    {
        if(n==0&&m==0&&c==0) return 0;
        ll arr[n+2];
        ll arr2[n+2];
        for(ll i=1;i<=n;i++)
        {
            cin>>arr[i];
            arr2[i]=0;
        }
        ll sum=0,maxi=0,flag=0;
        for(ll i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            if(arr2[x]==0)
            {
                sum+=arr[x];
                arr2[x]=1;
            }
            else
            {
                sum-=arr[x];
                arr2[x]=0;
            }
             if(sum>c)
            {
                flag=1;
                break;
            }
            if(sum>maxi) maxi=sum;

        }
        cout<<"Sequence "<<k<<endl;
        if(flag==1) cout<<"Fuse was blown."<<endl;
        else
        {
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<maxi<<" amperes."<<endl;
        }
        k++;
    }
    return 0;
}

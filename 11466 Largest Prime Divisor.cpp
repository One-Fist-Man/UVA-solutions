#include<bits/stdc++.h>
#define k 10000000
using namespace std;
typedef long long ll;
vector<ll>prim;
bool arr[k+5];
void seive()
{
    for(ll i=3;i*i<=k;i+=2)
    {
        if(arr[i]==0)
        {
            for(ll j=i*i;j<=k;j+=i)
            {
                arr[j]=1;
            }
        }
    }

    prim.push_back(2);
    for(ll i=3;i<=k;i+=2)
    {
        if(arr[i]==0) prim.push_back(i);
    }
//
//    for(ll i=0;i<prim.size();i++) cout<<prim[i]<<" ";
//    cout<<endl;

}

void div(ll n)
{
    vector<ll>ans;
    for(ll i=0;i<prim.size()&&prim[i]*prim[i]<=n&&n!=1;i++)
    {
        if(n%prim[i]==0)
           {
               ans.push_back(prim[i]);
              while(n%prim[i]==0)
                {
                    n/=prim[i];
                }
           }
    }

//   for(ll i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    if(n!=1) ans.push_back(n);

    if(ans.size()>1) cout<<ans[ans.size()-1]<<endl;
    else cout<<-1<<endl;
}
int main()
{
    seive();
//    for(ll i=0;i<10;i++) cout<<arr[i]<<" ";

    ll n;
    while(cin>>n)
    {
        if(n==0) return 0;
        if(n<0) n*=-1;
         div(n);
    }


    return 0;
}

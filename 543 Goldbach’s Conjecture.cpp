#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define n 1000000
vector<int>prime;
bool arr[n+1];
void sieve()
{

    // for(int i=0;i<=n;i++) cout<<arr[i]<<" ";
    for(ll i=3; i*i<=n; i+=2)
    {
        if(arr[i]==0)
        {
            for(ll j=i*i; j<=n; j+=i+i)
            {
                arr[j]=1;
            }
        }
    }
    for(ll i=3; i<=n; i+=2)
    {
        if(arr[i]==0)
            prime.push_back(i);
    }
//     for(int i=0;i<prime.size();i++) cout<<prime[i]<<" ";
//     cout<<endl;
}
ll binsrch(ll iteam)
{
    ll start=0,endi=prime.size()-1;
    ll mid;
    while(start<endi)
    {

        mid=(start+endi)/2;
       // cout<<start<<" "<<mid<<" "<<endi<<endl;
        if(prime[mid]<iteam)
        {
            start=mid+1;
        }
        else if(prime[mid]>iteam)
        {
           endi=mid-1;
        }

    }
    return start;
}
int main()
{
    ll k;
    sieve();

    while(cin>>k)
    {
        if(k==0) return 0;
        ll a=0,b=0,flag=0;
        ll g=binsrch(k);
       // cout<<"position "<<g<<endl;
        ll siz=g;
        //ll p=binsrch(k);
        for(ll i=0; i<=siz; i++)
        {
            for(ll j=siz; j>=0; j--)
            {
                if(prime[i]+prime[j]==k)
                {
                    a=prime[i];
                    b=prime[j];
                    flag=1;
                    break;
                }
                else if(prime[i]+prime[j]<k)
                {
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(a==0) cout<<"Goldbach's conjecture is wrong."<<endl;
        else
        cout<<k<<" = "<<a<<" + "<<b<<endl;
        //prime.clear();

    }

    return 0;
}

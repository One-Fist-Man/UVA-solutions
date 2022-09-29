#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define n 20000000
vector<int>prime;
vector< pair<int,int> > pairs;
bool arr[n+1];
void sieve()
{

    prime.push_back(2);

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
    // for(int i=0;i<prime.size();i++) cout<<prime[i]<<" ";
}
int main()
{
    //ll n;
   sieve();
   for(ll i=0;i<prime.size()-1;i++)
   {
       if((prime[i]+2)==prime[i+1])
       {
           pairs.push_back(make_pair(prime[i],prime[i+1]));
       }
   }
   ll k;
   while(cin>>k)
   {
       cout<<"("<<pairs[k-1].first<<", "<<pairs[k-1].second<<")"<<endl;
   }

    return 0;
}

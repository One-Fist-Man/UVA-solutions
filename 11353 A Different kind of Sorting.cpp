#include<bits/stdc++.h>
using namespace std;
#define n 2000000
bool arr[n+1];
vector<int>prime,nprime;
void sieve()
{
    prime.push_back(1);
     prime.push_back(2);

    for(int i=4;i<=n;i+=2) nprime.push_back(i);

    for(int i=3;i*i<=n;i+=2)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=n;j+=i+i)
            {
                arr[j]=1;
            }
        }
    }

    for(int i=3;i<=n;i+=2)
    {
       if(arr[i]==0)
        prime.push_back(i);

       else nprime.push_back(i);
    }
    //sort(nprime.begin(),nprime.end());
//    for(int i=0;i<prime.size();i++) cout<<prime[i]<<" ";
//    cout<<endl;
//    for(int i=0;i<nprime.size();i++) cout<<nprime[i]<<" ";
}
int cntfactor(int p)
{
    int cnt=0;
    for(int i=1;i*i<=prime.size();i++)
    {

        if(p%prime[i]==0)
        {

            while(p%prime[i]==0)
            {

                p=p/prime[i];
                //cout<<p<<" "<<prime[i]<<endl;
                cnt++;
            }

        }
        if(p<prime[i]) break;
    }
   // cout<<p<<endl;
    if(p>1) cnt++;
    return cnt;
}
int main()
{
    map<int,int>mp;
    sieve();
    for(int i=0;i<nprime.size();i++)
    {
       // cout<<nprime[i]<<" ";
        int cnt=cntfactor(nprime[i]);
        mp[nprime[i]]=cnt;
       //cout<<cnt<<endl;
    }
    //cout<<endl<<endl;
    for(int i=0;i<nprime.size();i++)
    {
        for(int j=i+1;j<nprime.size();j++)
        {
            if(mp[nprime[i]]>mp[nprime[j]] || (mp[nprime[i]]==mp[nprime[j]] && nprime[i]>nprime[j]))
            {
                swap(nprime[i],nprime[j]);
            }
        }
        prime.push_back(nprime[i]);
    }
//    for(int i=0;i<prime.size();i++) cout<<prime[i]<<" ";
//    cout<<endl;
   int l=1,a;
   while(cin>>a)
   {
       if(a==0) return 0;
       cout<<"Case "<<l<<": "<<prime[a-1]<<endl;
       l++;
    }

    return 0;
}

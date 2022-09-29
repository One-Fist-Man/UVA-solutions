#include<bits/stdc++.h>
using namespace std;
#define n 10000000
typedef long long ll;

ll arr[n+1];
int main()
{
    arr[0]=1;
    arr[1]=1;
    for(ll i=2; i*i<=n; i++)
    {
        if(arr[i]==0)
        {
            for(ll j=i*i; j<=n; j+=i)
                arr[j]=1;
        }
    }

//  for(ll i=0;i<n;i++) cout<<i<<" "<<arr[i]<<endl;
    ll a;
    while(cin>>a)
    {
        if(arr[a]==0)
        {
            ll flag=0;
            stringstream ss;
            ss<<a;
            string s;
            ss>>s;

            reverse(s.begin(),s.end());
            stringstream ss2;
            ss2<<s;
            ll b;
            ss2>>b;
          //  cout<<b<<endl;
            if(arr[b]==0&&a!=b)
                flag=1;

            if(flag==1)
                cout<<a<<" is emirp."<<endl;
            else
                cout<<a<<" is prime."<<endl;

        }
        else
            cout<<a<<" is not prime."<<endl;

    }




    return 0;
}

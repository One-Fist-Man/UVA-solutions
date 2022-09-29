#include<bits/stdc++.h>
#define k 31630
using namespace std;
typedef long long ll;
vector<ll>vec;
ll arr[k+5];
void seive()
{
    for(ll i=3; i*i<=k; i+=2)
    {
        if(arr[i]==0)
        {
            for(ll j=i*i; j<=k; j+=i)
            {
                arr[j]=1;
            }
        }
    }

    vec.push_back(2);
    for(ll i=3; i<=k; i+=2)
    {
        if(arr[i]==0)
            vec.push_back(i);
    }
}

int divcnt(ll n)
{
    if(n==1) return 0;
    double counti=n,p=n;
    for(ll i=0; vec[i]*vec[i]<=n&&i<vec.size(); i++)
    {
        if(n%vec[i]==0)
        {
            counti*=(double)((vec[i]-1.0)/vec[i]);
           // cout<<counti<<endl;
            while(n%vec[i]==0)
            {
                n/=vec[i];

            }
        }

    }
    if(n!=1)
        counti*=(double)(n-1.0)/n;

        //counti*=(double)p;

    return (int)counti ;
}
int main()
{
    seive();
    ll n;
//    fstream fil;
//   fil.open("my.txt");
    while(cin>>n)
    {
        if(n==0) return 0;

        int counti=0;
        counti= divcnt(n);
        cout<<counti<<endl;
    }


    return 0;
}


#include<bits/stdc++.h>
#define k 3200
typedef long long ll;
using namespace std;
vector<ll>vec;
ll maxi=0,val=0;
bool arr[k+5];

void seive()
{
    for(ll i=3; i*i<=k; i+=2)
    {
        if(arr[i]==0)
        {
            for(ll j=i*i; j<=k; j+=i+i)
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

ll divcnt(ll n)
{

    ll div=1,counti=1,p=n;

    for(ll i=0; vec[i]*vec[i]<=n&&n!=1&&i<vec.size(); i++)
    {
        counti=1;
        if(n%vec[i]==0)
        {
            while(n%vec[i]==0)
            {
                counti++;
                n/=vec[i];
               // cout<<vec[i]<<" "<<n<<endl;
            }
        }

        div*=counti;
    }
    if(n!=1)
        div*=2;

    //cout<<"val "<<p<<" "<<"div "<<div<<endl;

    if(maxi<div)
    {
        maxi=div;
        val=p;
    }

}

///// sqrt() algo
//ll divcnt(ll n)
//{
//    ll counti=0;
//    for(ll i=1; i*i<=n; i++)
//    {
//        if(i*i==n)
//            counti++;
//        else if(n%i==0)
//            counti+=2;
//    }
//    return counti;
//
//}

int main()
{
    seive();
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,u;
        cin>>l>>u;
       // ll maxi=0,val=0,counti=0;

        for(ll i=l; i<=u; i++)
        {
        divcnt(i);

//            if(maxi<counti)
//            {
//                maxi=counti;
//                val=i;
//            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<val<<" has a maximum of "<<maxi<<" divisors."<<endl;
        maxi=0;
        val=0;

    }


    return 0;
}

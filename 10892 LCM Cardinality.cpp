#include<bits/stdc++.h>
#define t 44730
using namespace std;
typedef long long ll;
vector<ll>vec;
void divisor(ll n)
{
    for(ll i=1; i*i<=n; i++)
    {
        if(i*i==n)
            vec.push_back(i);
        else if(n%i==0)
        {
            vec.push_back(i);
            vec.push_back(n/i);
        }
    }
}

int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0) return 0;
        divisor(n);
        sort(vec.begin(),vec.end());
//    for(ll i=0; i<vec.size(); i++)
//        cout<<vec[i]<<" ";
        ll counti=vec.size();
//
//    cout<<endl<<vec.size()<<endl;
        ll lcm=0;
        for(ll i=1; i<vec.size()-1; i++)
        {
            for(ll j=i+1; j<vec.size()-1; j++)
            {
                if(vec[j]%vec[i]!=0&&(vec[j]*vec[i])>=n)
                {
                    lcm=(vec[i]/__gcd(vec[i],vec[j]))*vec[j];
                    if(lcm==n)
                        counti++;
                }
            }
        }
        cout<<n<<" "<< counti<<endl;
        vec.clear();

    }


    return 0;
}


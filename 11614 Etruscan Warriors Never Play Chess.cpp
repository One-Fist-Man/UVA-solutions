#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
       while(t--)
    {
        ll n;
        cin>>n;
        ll i=1,counti=0;
        while(n>=i)
        {
            n-=i;
            counti++;
            i++;
        }
        cout<<counti<<endl;
    }

    return 0;
}


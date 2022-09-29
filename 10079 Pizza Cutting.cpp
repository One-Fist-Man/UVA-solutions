#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n<0) return 0;
        ll sum=1;
        for(int i=0; i<=n; i++)
        {
            sum+=i;
        }
        cout<<sum<<endl;

    }

    return 0;
}

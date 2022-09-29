#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long H(int n)
{
    long long res = 0;
    int a=n/2;
    cout<<a<<endl;

    for( int i = 1; i <= a; i=i+1 )
    {
        res = (res + n/i);
    }
    res+=n-(n/2);
    return res;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
       // if(n<0) cout<<0<<endl;
        //else
        cout<<H(n)<<endl;
    }



    return 0;
}

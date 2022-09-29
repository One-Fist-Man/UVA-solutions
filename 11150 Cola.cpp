#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n;
    while(cin>>n)
    {
        ll rem=0;
        ll sum=n;
        n++;
        while(n>3)
        {
            //cout<<n<<endl;
            rem=n%3;
            n/=3;
            sum+=n;
            n+=rem;

        }
        //cout<<n<<endl;
        if(n==3)
            sum++;
        cout<<sum<<endl;
    }


    return 0;
}

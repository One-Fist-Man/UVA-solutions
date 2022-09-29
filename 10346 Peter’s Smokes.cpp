#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
//    ofstream fil;
//    fil.open("text.txt");
    while(cin>>n>>k)
    {

        ll sum=n,rem=0;
        while(n>=k)
        {
            rem=n%k;
            n=n/k;
            sum+=n;
            n+=rem;
            //cout<<"sum = "<<sum<<" N = "<<n<<" rem = "<<rem<<endl;

        }


        cout<<sum<<endl;
    }

/// formula =n+(n-1)/(k-1)

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,f,c;
        cin>>n>>f>>c;
        n+=f;

            ll rem=0;
            ll sum=0;
            //n++;
            while(n>c-1)
            {
                //cout<<n<<endl;
                rem=n%c;
                n/=c;
                sum+=n;
                n+=rem;

            }
            //cout<<n<<endl;
//        if(n==2)
//            sum++;
            cout<<sum<<endl;


    }


    return 0;
}

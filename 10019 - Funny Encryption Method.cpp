#include <bits/stdc++.h>
using namespace std;

#define ff                first
#define ss                second
#define pii               pair<int,int>
#define mk                make_pair
#define ll                long long
#define ull               unsigned long long
#define pb                push_back
#define fast_in_out       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define pi acos(-1.0)
#define inf (1<<29)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define all(a) a.begin(),a.end()
#define eps 1e-9
#define MX 1000002
int main()
{
    fast_in_out;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a=n,counti1=0,counti2=0;
        while(n!=0)
        {
            if(n%2==1)
                counti1++;
            n/=2;
        }

        while(a!=0)
        {
            int b=a%10;
            a/=10;
            while(b!=0)
            {
                if(b%2==1)
                    counti2++;
                b/=2;
            }
        }
        cout<<counti1<<" "<<counti2<<endl;


    }

    return 0;
}

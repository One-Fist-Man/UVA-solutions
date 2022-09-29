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
#define myabs(a) ((a)<0?(-(a)):(a))
#define pi acos(-1.0)
#define inf (1<<29)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define all(a) a.begin(),a.end()
#define xx first
#define yy second
#define eps 1e-9
#define i64 long long
#define MX 1000002
int main()
{
    fast_in_out;
    ll n;
    while(cin>>n)
    {
       if(n==0) return 0;
       ll maxi=0,counti=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(a>=0)
                counti+=a;
            else
                counti=0;
            if(maxi<counti)
                maxi=counti;
        }
        if(maxi==0)
            cout<<"Losing streak."<<endl;
        else
            cout<<"The maximum winning streak is "<<maxi<<"."<<endl;

    }

    return 0;
}
//  cin>>a;
//            if(a>0)
//            {
//                counti2=0;
//                counti+=a;
//            }
//            else
//            {
//                counti=0;
//                count2+=a;
//            }
//
//            if(maxi<counti)
//                maxi=counti;
//            if(mini>counti2)
//                mini=counti2;
//        }
//        if(counti<counti2)
//            cout<<"Losing streak."<<endl;
//        else
//            cout<<"The maximum winning streak is "<<counti<<"."<<endl;

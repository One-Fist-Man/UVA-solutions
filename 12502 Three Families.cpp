//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//
//int main()
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll x,y,z;
//        cin>>x>>y>>z;
//        double  a,b,c,ans;
//        a=(x+y)/3.0;
//        b=x-a;
//        c=y-a;
//        ans=z/(b+c)*b;
//        cout<<ans<<endl;
//    }
//
//
//
//    return 0;
//}
//
#include<stdio.h>

int main(){
    static unsigned n;

    while(scanf("%u",&n) && n)
        printf("%u\n", n * (n + 1) * (2 * n + 1 ) / 6 );

    return 0;
}

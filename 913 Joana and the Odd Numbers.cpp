//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//#define len 1000000000
//int main()
//{
//    for(int i=3;i<=len;i+=2)
//    {
//        int sum=0,
//    }
//
//    return 0;
//}
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,n;
    while(scanf("%lld",&n)==1)
    {
        int b=(n*(n+2)/2);
        cout<<b<<endl;
        a=(b*3)-6;
        printf("%lld\n",a);
    }
    return 0;
}

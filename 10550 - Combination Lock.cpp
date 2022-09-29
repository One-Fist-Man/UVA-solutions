#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0&&b==0&&c==0&&d==0) return 0;
        int sum=1080;
        int x=abs(a-b);
        x=abs(x-40)*9;
        sum+=x;
        x=abs(b-c);
        x=abs(x-40)*9;
        sum+=x;
        x=abs(c-d);
        x=abs(x-40)*9;
        sum+=x;
        cout<<sum<<endl;
    }

    return 0;
}

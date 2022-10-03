#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==-1) return 0;
        int c=abs(a-b);
        int d=abs(c-100);
        cout<<min(c,d)<<endl;
    }
    return 0;
}

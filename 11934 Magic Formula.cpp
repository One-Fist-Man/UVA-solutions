#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c,d,l,f,counti=0;

    while(cin>>a>>b>>c>>d>>l)
    {
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            return 0;
        counti=0;
        for(int i=0; i<=l; i++)
        {
            f=a*(i*i)+b*i+c;
            if(f%d==0)
                counti++;
        }
        cout<<counti<<endl;
    }



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t,k=1;
    cin>>t;

    while(t--)
    {
        ll a,b,dis;
        cin>>a>>b;
        if(a==b)
        {
            if(a%2==0)
            cout<<"Case "<<k<<": "<<0<<endl;
            else cout<<"Case "<<k<<": "<<a<<endl;

        }
        else
        {

                dis=b-a;
               // if(a!=0)
                dis++;

             //cout<<dis<<endl;
          ll n=dis/2;
          if(b%2!=0&&dis%2!=0)n++;
          if(b%2==0) b=b-1;
            // cout<<n<<endl;
          if(a%2==0) a=a+1;
            cout<<"Case "<<k<<": "<<(n*(a+b)/2)<<endl;
            k++;
        }


    }

    return 0;
}

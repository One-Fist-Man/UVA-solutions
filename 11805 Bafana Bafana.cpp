#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   // ofstream fil;
    //fil.open("my.txt");
    ll t,b=1;
    cin>>t;
    while(t--)
    {
        ll n,k,p,x;
        cin>>n>>k>>p;
        if(k+p>n)
        {
            ll a=n-k;
            p =p-a;
            x =p%n;
        }
        else
        {
            x=k+p;
        }
        if(x==0) x=n;


//            int a=k;
//            for(int i=0;i<p;i++)
//            {
//                if(a==n)
//                    a=1;
//                else a++;
//            }
           // cout<<a<<endl;


      cout<<"Case "<<b<<": "<<x<<endl;
        b++;

    }
    return 0;

}

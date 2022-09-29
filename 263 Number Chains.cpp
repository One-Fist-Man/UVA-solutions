#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        map<ll,ll>mp;
        ll flag=0,z,counti=0;
        z=n;
        cout<<"Original number was "<<n<<endl;
        while(flag!=1)
        {
            counti++;
            stringstream s1;
            string a,b,s;
            s1<<z;
            s1>>s;
            a=b=s;
            sort(a.begin(),a.end());
            sort(b.begin(),b.end(),greater<char>());

            ll x,y;
            stringstream ss,ss2;
            ss<<a;
            ss>>x;
            // cout<<x<<endl;
            ss2<<b;
            ss2>>y;
            //cout<<y<<endl;

            z=y-x;
            cout<<y<<" - "<<x<<" = "<<z<<endl;
            // cout<<z<<endl;
            mp[z]++;
            if(mp[z]>1)
            {
                flag=1;
                break;
            }
        }
        cout<<"Chain length "<<counti<<endl;
        cout<<endl;

    }

    return 0;
}

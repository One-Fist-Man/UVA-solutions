#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,counti=0;
    while(cin>>n)
    {
        if(counti!=0) cout<<endl;
        counti++;
        vector<string>vec;
       unordered_map<string,int>s1,s2;
        for(ll i=0;i<n;i++)
        {
            string s;
            cin>>s;
            s1[s]=0;
            vec.push_back(s);
        }

         for(ll i=0;i<n;i++)
        {
            string s;
            ll a,b,c;
            cin>>s>>a>>b;
            s2[s]=a;
            if(b!=0)
            {
                c=a/b;
            //s2[s]=a;
            a=a%b;
            }

            s1[s]+=a;
            for(ll j=0;j<b;j++)
            {
                string k;
                cin>>k;
                s1[k]+=c;
            }
        }

        for(ll i=0;i<n;i++)
        {

          ll a=s1[vec[i]]-s2[vec[i]];
           cout<<vec[i]<<" "<<a<<endl;
        }

    }

    return 0;
}

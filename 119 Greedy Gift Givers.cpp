#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    while(cin>>n)
    {
       unordered_map<string,int>s1,s2;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            cout<<s<<endl;
            s1.insert(make_pair(s,0));
        }
        cout<<endl;

       // map<string,int>s1,s2;
        for(auto it=s1.begin();it!=s1.end();it++)
        {
           cout<<it->first<<" "<<it->second<<endl;
        }
        cout<<endl;

         for(int i=0;i<n;i++)
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

        for(auto it=s1.begin();it!=s1.end();it++)
        {

            ll a=it->second-s2[it->first];
            cout<<it->first<<" "<<a<<endl;
        }

    }

    return 0;
}

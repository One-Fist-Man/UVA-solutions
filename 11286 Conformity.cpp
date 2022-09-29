#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll t;
        while(cin>>t)
        {
             map<string,int>mp;
            if(t==0) return 0;
            cin.ignore();
            string s;

            for(ll i=0;i<t;i++)
            {
                 getline(cin,s);
                 sort(s.begin(),s.end());
                 mp[s];
            }
            cout<<mp.size()<<endl;
        }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
      map<string,string>mp;
        ll n;
        cin>>n;
        cin.ignore();

        while(n--)
        {
            string s,s2;

            getline(cin,s);
            //cin.ignore();
            getline(cin,s2);
            //cin.ignore();
            mp[s]=s2;
        }
        ll d;
        cin>>d;
        cin.ignore();
        while(d--)
        {
            string s;
             getline(cin,s);
             //cin.ignore();
            cout<<mp[s]<<endl;
        }
    return 0;
}

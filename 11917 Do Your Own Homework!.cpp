#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k=1,t;
    cin>>t;
    while(t--)
    {
        map<string,int>mp;
        ll n;
        cin>>n;

        while(n--)
        {
            string s;
            ll a;
            cin>>s>>a;
            mp[s]=a;
        }
        ll d;
        cin>>d;
        string s;
        cin>>s;
        cout<<"Case "<<k<<": ";
        if(mp[s]==0)
            cout<<"Do your own homework!"<<endl;
        else if(mp[s]<=d)
            cout<<"Yesss"<<endl;
        else if(mp[s]<=d+5)
            cout<<"Late"<<endl;
        else if(mp[s]>d+5)
            cout<<"Do your own homework!"<<endl;
        k++;
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
     getchar();
    while(n--)
    {

        string s;
        getline(cin,s);

//        while(s.length()!=0)
//            getline(cin,s);

        ll f=0,m=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='F') f++;
            else if(s[i]=='M')m++;
        }
       // cout<<f<<" "<<m<<endl;
        if(f>1&&m>1&&f==m) cout<<"LOOP"<<endl;
        else cout<<"NO LOOP"<<endl;


    }

    return 0;
}

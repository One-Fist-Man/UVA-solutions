#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k=1;
    cin>>n;
    cin.ignore();
    while(n--)
    {
         string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<"Case "<<k<<": ";
    k++;
    if(s1==s2) cout<<"Yes"<<endl;
    else
    {
        string a="",b="";
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=32) a+=s1[i];
        }
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]!=32) b+=s2[i];
        }
       // cout<<a<<" "<<b<<endl;
        if(a==b) cout<<"Output Format Error"<<endl;
        else cout<<"Wrong Answer"<<endl;
    }
    }

    return 0;
}

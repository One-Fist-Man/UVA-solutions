#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string,string>mp;
int main()
{
    ll l,n;
    cin>>l>>n;

    while(l--)
    {
        string a,b;
        cin>>a>>b;
        mp[a]=b;
    }
    cin.ignore();
    while(n--)
    {
        string a;
        getline(cin,a);
        int siz=a.size()-1;
        if(mp[a].size()>0)
            cout<<mp[a]<<endl;
        else if(a[siz]=='y'&&(a[siz-1]!='a'&&a[siz-1]!='e'&&a[siz-1]!='i'&&a[siz-1]!='o'&&a[siz-1]!='u'))
        {
            a[siz]='i';
            cout<<a<<"es"<<endl;
        }
        else if(a[siz]=='o'||a[siz]=='s'||(a[siz-1]=='c'&&a[siz]=='h')||(a[siz-1]=='s'&&a[siz]=='h')||a[siz]=='x')
        {
            cout<<a<<"es"<<endl;
        }
        else
            cout<<a<<"s"<<endl;
    }
    return 0;
}

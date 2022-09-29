#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(cin>>s)
    {
        if(s.size()==1&&s[0]=='0') return 0;

        int a=0;
        for(int i=0;i<s.size();i++)
        {
            a=a*10+s[i]-'0';
            a=a%17;

        }
        if(a==0) cout<<1<<endl;
        else cout<<0<<endl;
    }

    return 0;
}

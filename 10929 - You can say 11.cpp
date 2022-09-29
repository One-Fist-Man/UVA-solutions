#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="0") return 0;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            sum=(sum*10)+s[i]-'0';
            sum=sum%11;
           // cout<<sum<<endl;
        }
        //cout<<sum<<endl;
        if(sum==0) cout<<s<<" is a multiple of 11."<<endl;
        else cout<<s<<" is not a multiple of 11."<<endl;
    }

    return 0;
}


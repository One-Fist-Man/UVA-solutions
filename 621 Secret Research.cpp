#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int p=s.size()-1;
        if(s=="1"||s=="4"||s=="78")cout<<"+"<<endl;

        else if(s[p]=='5'&&s[p-1]=='3') cout<<"-"<<endl;

        else if(s[0]=='9'&&s[p]=='4') cout<<"*"<<endl;

        else if(s[0]=='1'&&s[1]=='9'&&s[2]=='0') cout<<"?"<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s=="DONE") return 0;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string p="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>=97&&s[i]<=122)
                p+=s[i];
        }
//        cout<<p<<endl;
        s=p;
        reverse(p.begin(),p.end());
        if(p==s)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
    }


    return 0;
}

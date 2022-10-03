#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s=="*") return 0;
        char c;
        c=s[0];
        if(c>96)
            c-=32;
        int flag=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==32)
            {
                if(s[i+1]>96)
                    s[i+1]-=32;
                if(c!=s[i+1])
                {

                    flag=1;
                    break;
                }
//cout<<s[i+1]<<endl;


            }

        }
        if(flag==0)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }

    return 0;
}

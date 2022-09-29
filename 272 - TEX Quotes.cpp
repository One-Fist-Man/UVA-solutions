#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int flag=0;
    while(getline(cin,s))
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='"'&&flag==0)
            {
                cout<<"``";
                flag=1;
            }
            else if(s[i]=='"'&&flag==1)
            {
                cout<<"''";
                flag=0;
            }
            else cout<<s[i];
        }
        cout<<endl;

    }

    return 0;
}

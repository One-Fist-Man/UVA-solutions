#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(cin>>s)
    {
        int k=0,flag=2;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
            {
                if(k!=1)
                {
                      cout<<1;
                      k=1;
                }

            }
            else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='S'||s[i]=='Q'||s[i]=='X'||s[i]=='Z')
            {
                if(k!=2)
                {
                      cout<<2;
                     k=2;
                }
            }
            else if(s[i]=='D'||s[i]=='T')
            {
                if(k!=3)
                {
                      cout<<3;
                      k=3;
                }
            }
            else if(s[i]=='L')
            {
                if(k!=4)
                {
                      cout<<4;
                      k=4;
                }

            }
            else if(s[i]=='M'||s[i]=='N')
            {
                if(k!=5)
                {
                      cout<<5;
                      k=5;
                }
            }
            else if(s[i]=='R')
            {
                if(k!=6)
                {
                      cout<<6;
                      k=6;
                }
            }
            else k=0;
        }
        cout<<endl;
    }

    return 0;
}

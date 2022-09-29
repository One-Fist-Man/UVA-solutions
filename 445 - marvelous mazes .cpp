#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int j=0;j<n;j++)
int main()
{
    string s;
    int k=0;
    while(getline(cin,s))
    {
       // if(k==1) cout<<endl;
        k=1;
        int sum=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>46&&s[i]<58)
                sum+=(s[i]-'0');
            else if(s[i]>64&&s[i]<91)
            {
                // cout<<sum<<endl;
                loop(sum) cout<<s[i];
                sum=0;
            }
            else if(s[i]=='b')
            {
                //cout<<sum<<endl;
                loop(sum) cout<<' ';
                sum=0;
            }
            else if(s[i]=='!')
            {

                cout<<endl;
                sum=0;
            }
            else if(s[i]=='*')
            {
                //cout<<sum<<endl;
                loop(sum) cout<<'*';
                sum=0;
            }
        }
        cout<<endl;

    }

    return 0;
}

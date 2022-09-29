#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,k=0;
    cin>>t;
    while(t--)
    {
        if(k==1)
        cout<<endl;
        k=1;
        map<string,int>mp;
        ll n;
        cin>>n;
        string s[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            string p="";
            for(int j=0; j<s[i].size(); j++)
            {
                if(s[i][j]=='A'||s[i][j]=='B'||s[i][j]=='C')
                    s[i][j]='2';
                else if(s[i][j]=='D'||s[i][j]=='E'||s[i][j]=='F')
                    s[i][j]='3';
                else if(s[i][j]=='G'||s[i][j]=='H'||s[i][j]=='I')
                    s[i][j]='4';
                else if(s[i][j]=='J'||s[i][j]=='K'||s[i][j]=='L')
                    s[i][j]='5';
                else if(s[i][j]=='M'||s[i][j]=='N'||s[i][j]=='O')
                    s[i][j]='6';
                else if(s[i][j]=='P'||s[i][j]=='R'||s[i][j]=='S')
                    s[i][j]='7';
                else if(s[i][j]=='T'||s[i][j]=='U'||s[i][j]=='V')
                    s[i][j]='8';
                else if(s[i][j]=='W'||s[i][j]=='X'||s[i][j]=='Y')
                    s[i][j]='9';

                if(s[i][j]!='-')
                    p+=s[i][j];
            }
            p.insert(3,"-");


            mp[p]++;

        }
        int flag=0;

        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>=2)
            {
                cout<<it->first<<" "<<it->second<<endl;
                flag=1;
            }
        }
        if(flag==0) cout<<"No duplicates."<<endl;

    }

    return 0;
}

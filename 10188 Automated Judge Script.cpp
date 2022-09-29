#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,g=1;
    while(cin>>n)
    {
        if(n==0) return 0;
        cin.ignore(100, '\n');
        string s[n+1];
        for(ll i=0; i<n; i++)
        {
            char p[1000];
            gets(p);
            //cin.ignore(10000, '\n');
//             cin>>p;
//        while(s[i].length()!=0)
//            getline(cin,s[i]);
            s[i]="";
            s[i]+=p;
            //cout<<s[i]<<endl;
        }
        ll m;
        cin>>m;
        cin.ignore(100, '\n');
        string s2[m+1];
        for(ll i=0; i<m; i++)
        {
            char p[1000];
            gets(p);
            // cin.ignore(10000, '\n');
//        while(s[i].length()!=0)
//            getline(cin,s[i]);
            s2[i]="";
            s2[i]+=p;
            //cout<<s2[i]<<endl;
        }
        ll wrong=0,pre=0,j;
        ///presentation part
        for(ll i=0; i<n; i++)
        {
            for(j=0; j<s[i].size(); j++)
            {
                if(s[i][j]<47||s[i][j]>57)
                {
                    if(s[i][j]!=s2[i][j])
                    {
                        pre=1;
                        break;
                    }

                }
            }
        }

        for(ll i=0; i<m; i++)
        {
            for(j=0; j<s2[i].size(); j++)
            {
                if(s2[i][j]<47||s2[i][j]>57)
                {
                    if(s[i][j]!=s2[i][j])
                    {
                        pre=1;
                        break;
                    }

                }
            }
        }
        ///wrong part
        for(ll i=0; i<n; i++)
        {
            for(j=0; j<s[i].size(); j++)
            {
                if(s[i][j]>=47&&s[i][j]<=57)
                {
                    if(s[i][j]!=s2[i][j])
                    {
                        wrong=1;
                        break;
                    }

                }
            }
        }

        for(ll i=0; i<m; i++)
        {
            for(j=0; j<s2[i].size(); j++)
            {
                if(s2[i][j]>=47&&s2[i][j]<=57)
                {
                    if(s[i][j]!=s2[i][j])
                    {
                        wrong=1;
                        break;
                    }

                }
            }
        }

        if(pre==1)
            cout<<"Run #"<<g<<": Presentation Error"<<endl;
        else if(wrong==1)
            cout<<"Run #"<<g<<": Wrong Answer"<<endl;
        else
            cout<<"Run #"<<g<<": Accepted"<<endl;
            g++;
    }

    return 0;
}

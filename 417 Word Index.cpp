#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    map<string,int>mp;
    int a=1;
    for(char i='a'; i<='z'; i++)
    {
        string s="";
        s+=i;
        mp[s]=a;
        a++;
    }
    // for(auto it=mp.begin();it!=mp.end();it++) cout<<it->first<<" "<<it->second<<endl;

    for(char i='a'; i<='y'; i++)
    {
        string s="";
        s+=i;
        for(char j=i+1; j<='z'; j++)
        {
            s+=j;
            mp[s]=a;
            a++;
            s.erase(1,1);
        }
    }
    //for(auto it=mp.begin();it!=mp.end();it++) cout<<it->first<<" "<<it->second<<endl;
    for(char i='a'; i<='x'; i++)
    {
        string s="";
        s+=i;
        for(char j=i+1; j<='y'; j++)
        {
            s+=j;

            for(char k=j+1; k<='z'; k++)
            {
                s+=k;
                mp[s]=a;
                a++;
                s.erase(2,2);
            }
            s.erase(1,1);
        }
    }

    for(char i='a'; i<='w'; i++)
    {
        string s="";
        s+=i;
        for(char j=i+1; j<='x'; j++)
        {
            s+=j;

            for(char k=j+1; k<='y'; k++)
            {
                s+=k;
                for(char l=k+1; l<='z'; l++)
                {
                    s+=l;
                    mp[s]=a;
                    a++;
                    s.erase(3,3);
                }
                s.erase(2,2);

            }
            s.erase(1,1);
        }
    }

    for(char i='a'; i<='v'; i++)
    {
        string s="";
        s+=i;
        for(char j=i+1; j<='w'; j++)
        {
            s+=j;

            for(char k=j+1; k<='x'; k++)
            {
                s+=k;
                for(char l=k+1; l<='y'; l++)
                {
                    s+=l;
                    for(char m=l+1; m<='z'; m++)
                    {
                        s+=m;
                        mp[s]=a;
                        a++;
                        s.erase(4,4);
                    }

                    s.erase(3,3);
                }
                s.erase(2,2);

            }
            s.erase(1,1);
        }
    }
    string p;

    while(cin>>p)
        cout<<mp[p]<<endl;

    //for(auto it=mp.begin();it!=mp.end();it++) cout<<it->first<<" "<<it->second<<endl;

    return 0;
}

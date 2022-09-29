#include <bits/stdc++.h>
using namespace std;

#define ff                first
#define ss                second
#define pii               pair<int,int>
#define mk                make_pair
#define ll                long long
#define ull               unsigned long long
#define pb                push_back
#define fast_in_out       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define pi acos(-1.0)
#define inf (1<<29)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define all(a) a.begin(),a.end()
#define eps 1e-9
#define MX 1000002
int main()
{
    fast_in_out;
    string s;
    int k=0;
    while(getline(cin,s))
    {
        if(k==1)
        cout<<endl;
        k=1;
        map<int,int>mp;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>31&&s[i]<127)
            {
                int a=s[i];
                mp[a]++;
            }

        }

        for(auto i=0; i<mp.size(); )
        {
            auto maxi=mp.begin();

            //cout<<maxi->first<<endl;
            for(auto j=mp.begin(); j!=mp.end(); j++)
            {
                if(maxi->second > j->second)
                    maxi=j;
                else if(maxi->second ==j->second)
                {
                    if(maxi->first<j->first)
                        maxi=j;
                }
                //j++;
            }
            cout<<maxi->first<<" "<<maxi->second<<endl;
            if(i==mp.size())
                break;
            mp.erase(maxi->first);
        }

    }

    // cout<<4;

    // cout<<3;
    // cout<<(int)'\r';

    return 0;
}

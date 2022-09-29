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
    ll t;
    cin>>t;
    cin.ignore();
       while(t--)
    {
        string s;
        getline(cin,s);
        map<char,pii>mp;
        mp['B']=mk(1,0),mp['U']=mk(10,0),mp['S']=mk(100,0),mp['P']=mk(1000,0),mp['F']=mk(10000,0);
        mp['T']=mk(100000,0),mp['M']=mk(1000000,0);
        ll sum=0,er=0,flag=0,flag2=0,maxi=mp[s[0]].first;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]].second++;
//        if(i+1!=s.size())
//        {
            if(mp[s[i]].first>maxi)
            {
               maxi=mp[s[i]].first;
                flag=1;
            }
            else if(mp[s[i]].first<maxi)
            {
               flag2=1;
               maxi=mp[s[i]].first;
            }

            //  }

            if(flag==1&&flag2==1)
            {
                er=1;
                break;
            }
            if(mp[s[i]].second<10)
            {
                sum+=mp[s[i]].first;
                //cout<<mp[s[i]].second<<endl;
            }
            else
            {
                er=1;
                break;
            }

        }
        if(er==1)
            cout<<"error"<<endl;
        else
            cout<<sum<<endl;

    }

    return 0;
}

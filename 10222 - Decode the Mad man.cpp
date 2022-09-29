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

int lin(string s,int n,char a)
{
    for(int i=0; i<n; i++)
    {
        if(s[i]==a)
            return i;
    }
    return -1;
}
int main()
{
    fast_in_out;
//    char a='A';
//    a=tolower(a);
//    cout<<a;

    string k="`1234567890-=qwertyuiop[]asdfghjkl;'\\zxcvbnm,./";
    string k2="~!@#$%^&*()_+QWERTYUIOP{}ASDFGHJKL:\"|ZXCVBNM<>?";
    string s;

    while(getline(cin,s))
    {
        ll g=1;
            for(int j=0; j<s.size(); j++)
            {
                // cout<<vec[i][j];
//
//            if(vec[i][j]=='\\')
//                vec[i][j]='l';
//            else if(vec[i][j]=='"')
//                vec[i][j]='l';
//            else
//            {
                int n=k.size();
                int a=lin(k,n,s[j]);
                if(a>-1)
                    s[j]=k[a-2];
                else
                {
                    a=lin(k2,n,s[j]);
                    if(a>-1)
                        s[j]=k[a-2];
                }

                // }
            }
            cout<<s<<endl;

    }

    return 0;
}

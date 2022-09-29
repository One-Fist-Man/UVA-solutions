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
    while(getline(cin,s))
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A'||s[i]=='B'||s[i]=='C')
                s[i]='2';
            else if(s[i]=='D'||s[i]=='E'||s[i]=='F')
                s[i]='3';
            else if(s[i]=='G'||s[i]=='H'||s[i]=='I')
                s[i]='4';
            else if(s[i]=='J'||s[i]=='K'||s[i]=='L')
                s[i]='5';
            else if(s[i]=='M'||s[i]=='N'||s[i]=='O')
                s[i]='6';
            else if(s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S')
                s[i]='7';
            else if(s[i]=='T'||s[i]=='U'||s[i]=='V')
                s[i]='8';
            else if(s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z')
                s[i]='9';
        }
        cout<<s<<endl;

    }

    return 0;
}

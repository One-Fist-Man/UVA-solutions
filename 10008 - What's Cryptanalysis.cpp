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

    string p="";
    int str[200]={0};
    int arr[200]= {0};
    while(t--)
    {
        string s;
        getline(cin,s);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
            {
                if(s[i]>=97&&s[i]<=122)
                {
                    s[i]=s[i]-32;
                }
                arr[s[i]]++;
                if(str[s[i]]!=1)
                {
                   p+=s[i];
                   str[s[i]]=1;
                }
            }
        }
    }
//    cout<<p<<endl;
//
//    for(int i=0;i<p.size();i++)
//    {
//      cout<<arr[p[i]]<<" "<<p[i]<<endl;
//    }
//    cout<<endl;



        for(int j=0; j<p.size(); j++)
        {
               int maxi=0;
               char c;

                for(int i=0; i<p.size(); i++)
                {
                    if(maxi<arr[p[i]])
                    {
                        maxi=arr[p[i]];
                        c=p[i];
                    }
                    else if(maxi==arr[p[i]])
                    {
                        if(c>p[i])
                            c=p[i];
                    }
                }
                arr[c]=-1;
                cout<<c<<" "<<maxi<<endl;

        }
    return 0;
}

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
        int arr[200]= {0};
//    for(int i=0; i<10; i++)
//        cout<<arr[i]<<" ";
//    cout<<endl;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
            {
                if(s[i]>=65&&s[i]<=90)
                {
                    s[i]=s[i]+32;
                }
                arr[s[i]]++;
                //cout<<s[i]<<endl;
            }
        }
//    for(int i=0; i<s.size(); i++)
//        cout<<arr[s[i]]<<" ";
//    cout<<endl;
        string p="";
        int maxi=0;
        for(int i=0; i<s.size(); i++)
        {
            if(arr[s[i]]!=0)
            {
                if(maxi<arr[s[i]])
                {
                    p=s[i];
                    maxi=arr[s[i]];
                }
                else if(maxi==arr[s[i]])
                {
                    p+=s[i];
                }
                arr[s[i]]=0;
            }

        }
        sort(p.begin(),p.end());
        cout<<p<<endl;

    }

    return 0;
}

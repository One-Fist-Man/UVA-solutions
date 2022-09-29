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
    ll t,k=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a[300];
        memset(a,0,sizeof(a));
        for(int i=0; i<s.size(); i++)
        {
            a[s[i]]++;
        }


        int flag2=0;
        string ans="";
        for(int i=0; i<s.size(); i++)
        {
            if(a[s[i]]!=0)
            {
                int flag=0;
                for(int j=2; j<a[s[i]]; j++)
                {
                    if(a[s[i]]%j==0)
                    {
                        flag=1;
                        break;
                    }

                }
                if(flag==0&&a[s[i]]>1)
                {
                    //cout<<s[i]<<endl;
                    ans+=s[i];
                    flag2=1;
                }
                a[s[i]]=0;

            }

        }
        cout<<"Case "<<k++<<": ";
        if(flag2==0)
            cout<<"empty"<<endl;
        else
        {
            sort(ans.begin(),ans.end());
            cout<<ans<<endl;
        }


    }

    return 0;
}

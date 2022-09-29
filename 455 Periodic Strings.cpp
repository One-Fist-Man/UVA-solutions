#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
#define sz 100005
#define loop(a,n) for(int i=a;i<n;i++)
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        string s,p="";
        cin>>s;
        ll siz2=s.size();
        for(int i=0; i<siz2; i++)
        {
            p+=s[i];
            ll siz=p.size();
            int j=0;
            if(siz2%siz==0)
            {
                for( ; j<s.size(); j++)
                {
                    if(s[j]!=p[j%siz])
                        break;
                    // cout<<j<<" "<<j%siz<<endl;
                }
            }
            if(j==s.size())
                break;

        }
        cout<<p.size()<<endl;
        if(t!=0)
            cout<<endl;
    }
    return 0;
}

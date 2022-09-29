#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
ll parent[10000005];
ll finds(ll a)
{
    if(parent[a]!=a) parent[a]=finds(parent[a]);
        return parent[a];
}
void uni(ll a,ll b)
{
    ll p,q;
    p=finds(a);
    q=finds(b);
    if(p!=q)
    {
        parent[q]=p;
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,counti1=0,counti2=0;
        cin>>n;
        for(ll i=1; i<=n; i++)
            parent[i]=i;
        string s;
        cin.ignore();
        while(getline(cin,s))
        {
            if(s.size()==0)
                break;
            ll a=0,b=0;
            ll i=2;
            for(i=2;s[i]!=32;i++)
            {
                a=(a*10)+(s[i]-'0');
            }

            for(i++;i<s.size();i++)
            {
                b=(b*10)+(s[i]-'0');
            }

            //cout<<a<<" "<<b<<endl;
            if(s[0]=='c')
                uni(a,b);
            else if(s[0]=='q')
            {
                //cout<<finds(a)<<" "<<finds(b)<<endl;
                if(finds(a)==finds(b))
                    counti1++;
                else
                    counti2++;
            }
        }
        cout<<counti1<<","<<counti2<<endl;
        memeset(parent,0);
        if(t!=0) cout<<endl;

    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
#define all(x) x.begin(),x.end()
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fri(n) for(ll i=0;i<n;i++)
#define frj(n) for(ll j=0;j<n;j++)
ll flag=0;
void knapsack(ll siz,vector<ll>& arr,ll val)
{
    ll ans[siz+1][val+1];
    for(ll i=0; i<=siz; i++)
    {
        for(ll j=0; j<=val; j++)
        {
            if(i==0||j==0)
                ans[i][j]=0;
            else if(j-arr[i-1]>=0)
                ans[i][j]=max(ans[i-1][j],arr[i-1]+ans[i-1][j-arr[i-1]]);
            else
                ans[i][j]=ans[i-1][j];
        }

    }
    if(ans[siz][val]==val) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
//    for(ll i=0; i<=siz; i++)
//    {
//        for(ll j=0; j<=val; j++)
//        {
//            cout<<ans[i][j]<<" ";
//        }
//        cout<<endl<<endl;
//
//    }
//    for(int i=st;i<n;i++)
//    {
//        knapsack(10,arr,65,i,0);
//    }
//    if(ans==val) flag=1,return ;
//    if(st==siz) return arr[st];
//
//    knapsack(siz,arr,val,st+1,ans+arr[st]);
}
void solve()
{
    string s;
    getline(cin,s);
   //cout<<s<<endl;
    string a="";
    a+=s[0];
    vector<ll>v;
    ll sum=0;
    for(ll i=1;i<=s.size();i++)
    {
        if(s[i]==' '||i==s.size())
        {
            stringstream ss;
            ss<<a;
            ll b;
            ss>>b;
            sum+=b;
            v.pb(b);
            //cout<<b<<endl;
            a="";
        }
        else a+=s[i];

    }
    ll c=sum/2;
    //cout<<c<<endl;
    if(c*2==sum)
    knapsack(v.size(),v,c);
    else cout<<"NO"<<endl;

}
int main()
{
    ll t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    solve();
    }

    return 0;
}

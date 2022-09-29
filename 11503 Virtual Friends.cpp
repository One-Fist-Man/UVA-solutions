//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//
//ll main()
//{
//    ll t;
////    cin>>t;
//    while(t--)
//    {
//        ll n;
//        set<string>st;
//        cin>>n;
//        while(n--)
//        {
//            string a,b;
//            cin>>a>>b;
//            st.insert(a);
//            st.insert(b);
//            cout<<st.size()<<endl;
//        }
//    }
//
//
//    return 0;
//}
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
map<string,string>parent;
map<string,ll>renz;
string finds(string s)
{
    if(s==parent[s])
        return s;
    else
        return parent[s]=finds(parent[s]);
}
void uni(string s,string p)
{
    string a="",b="";

    a=finds(s);
    b=finds(p);
    if(a!=b)
    {
        //   cout<<a<<"   "<<b<<endl;
        if(renz[a]>=renz[b])
        {
            parent[b]=a;
            renz[a]+=renz[b];
            cout<<renz[a]<<endl;
        }
        else
        {
            // cout<<b<<endl;
            parent[a]=b;
            renz[b]+=renz[a];
            cout<<renz[b]<<endl;
        }
    }
    else cout<<renz[a]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        while(n--)
        {
            string a,b;
            cin>>a>>b;
            if(parent[a]=="")
                parent[a]=a;

            if(parent[b]=="")
                parent[b]=b;

            if(renz[a]==0)
                renz[a]=1;

            if(renz[b]==0)
                renz[b]=1;

            uni(a,b);
        }
        parent.clear();
        renz.clear();
    }
    return 0;
}

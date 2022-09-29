//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define memeset(arr,a) memset(arr,a,sizeof arr);
//#define inf 1000000000000000
//ll parent[30005];
//ll ans[300005];
//ll finds(ll a)
//{
//    if(parent[a]==a)
//        return a;
//    else
//        return  parent[a]=finds(parent[a]);
//}
//void uni(ll a,ll b)
//{
//    //cout<<a<<" "<<b<<endl;
//    ll p=finds(a);
//    ll q=finds(b);
//    if(p!=q)
//    {
//        //cout<<p<<endl;
//        parent[q]=p;
//
//    }
//}
//int main()
//{
//    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n,m;
//        cin>>n>>m;
//        for(ll i=1; i<=n; i++)
//        {
//            parent[i]=i;
//        }
//        while(m--)
//        {
//            ll a,b;
//            cin>>a>>b;
//            uni(a,b);
//        }
//        for(ll i=1; i<=n; i++)
//        {
//            ll a=finds(i);
//            ans[a]++;
//        }
//        ll maxi=0;
//        for(ll i=1; i<=n; i++)
//            if(maxi<ans[i])
//                maxi=ans[i];
//        cout<<maxi<<endl;
//        memeset(parent,0);
//        memeset(ans,0);
//    }
//
//
//    return 0;
//}


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
ll parent[30005];
ll range[30005];
ll finds(ll a)
{
    if(parent[a]==a)
        return a;
    else
        return  parent[a]=finds(parent[a]);
}

void uni2(ll a,ll b)
{
    ll p=finds(a);
    ll q=finds(b);
    if(p!=q)
    {
        if(range[p]>range[q])
        {
            parent[q]=p;
            range[p]+=range[q];
        }
        else
        {
            parent[p]=q;
            range[q]+=range[p];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        for(ll i=1; i<=n; i++)
        {
            parent[i]=i;
            range[i]=1;
        }
        while(m--)
        {
            ll a,b;
            cin>>a>>b;
            uni2(a,b);
        }
        ll maxi=0;
        for(ll i=1; i<=n; i++)
            if(maxi<range[i])
                maxi=range[i];
        cout<<maxi<<endl;
        memeset(parent,0);
        memeset(range,0);
    }


    return 0;
}

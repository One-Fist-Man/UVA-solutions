#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
struct node
{
    int a,b;
    node( int _a,int _b)
    {
        a=_a;
        b=_b;
    }
    bool operator < ( node p) const
    {
        if(b==p.b) return a<p.a;
        else
        return b<p.b;
    }
};
//bool comp(node x,node y)
//{
//    return x.b<y.a;
//}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,m;
    while(cin>>n>>m)
    {
        if(!n&&!m) return 0;
        map<int,int>mp;
        vector<node>vec;
        for(int i=1; i<=n; i++)
        {
            mp[i]=0;
        }
        while(m--)
        {
            ll a,b;
            cin>>a>>b;
            mp[b]++;
        }
        for(int i=1; i<=n; i++)
        {
            vec.push_back(node(i,mp[i]));
        }
        sort(vec.begin(),vec.end());
        cout<<vec[0].a;
        for(int i=1; i<vec.size(); i++)
            cout<<" "<<vec[i].a;
        cout<<endl;


    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
# define siz 100005
ll arr[siz],tree[siz*4];
map<ll,ll>mp;
void const_tree(ll root,ll s,ll e)
{
    if(s==e)
    {
        tree[root]=++mp[arr[s]];
       return;
    }
    ll left=root*2;
    ll right= root*2+1;
    ll mid=(s+e)/2;
    const_tree(left,s,mid);
    const_tree(right,mid+1,e);
    tree[root]=max(tree[left],tree[right]);
   // cout<<tree[root]<<endl;

}
ll query(ll root,ll s,ll e,ll a,ll b)
{
    if(a>e||b<s) return 0;
    if(s==a&&b==e)
    {
        mp[arr[s]]++;
        return mp[arr[s]];
    }
    ll left=root*2;
    ll right=root*2+1;
    ll mid=(s+e)/2;
    ll p=query(left,s,mid,a,b);
    ll q=query(right,mid+1,e,a,b);
    //cout<<max(p,q)<<endl;
    return max(p,q);
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,q;
    cin>>n>>q;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        //mp[arr[i]]++;
    }

       // const_tree(1,0,n-1);

        for(ll i=0;i<q;i++)
        {
            ll a,b;
            cin>>a>>b;
            ll c=query(1,0,n-1,a-1,b-1);
            cout<<c<<endl;
            mp.clear();
        }


    return 0;
}

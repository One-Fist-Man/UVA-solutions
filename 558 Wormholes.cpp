#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 100000000000000000
//fstream fil;
ll weight[1005];
struct node
{
    ll a,b,c;
};
void bellman(ll n,ll m,vector<node >vec)
{

    for(ll i=0; i<n; i++)
        weight [i]=inf;
    weight [0]=0;
    for(ll i=0; i<n-1; i++)
    {
        for(ll j=0; j<m; j++)
        {
            node p;
            p=vec[j];
            ll a=p.a,b=p.b,c=p.c;

            if(weight[b]>weight[a]+c)
            {
               // cout<<111<<endl;
                weight[b]=weight[a]+c;
            }
        }
    }
    ll flag=0;

    for(ll i=0; i<m; i++)
    {
        node p=vec[i];
        ll a=p.a,b=p.b,c=p.c;
        if(weight[b]>weight[a]+c)
        {
            //cout<<111<<endl;
            weight[b]=weight[a]+c;
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"possible"<<endl;
    else
        cout<<"not possible"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    //fil.open("input.txt");
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector< node >vec;
        for(ll i=0; i<m; i++)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            node p;
            p.a=a,p.b=b,p.c=c;
            vec.push_back(p);
            //cout<<111<<endl;
        }
        bellman(n,m,vec);
        memeset(weight,0);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
struct node
{
    ll a,b,c;
};
ll weight [210];
void bellman(ll n,vector<node>vec)
{
    for(ll i=0; i<n+1; i++)
    {
        weight[i]=inf;
    }
    weight[1]=0;
    for(ll i=0; i<n-1; i++)
    {
        for(ll j=0; j<vec.size(); j++)
        {
            ll a,b,c;
            a=vec[j].a,b=vec[j].b,c=vec[j].c;
            if(weight[b]>weight[a]+c)
            {
                weight[b]=weight[a]+c;
                //fil<<weight[b]<<endl;
            }
        }
    }
    ll flag=0;
    for(ll j=0; j<vec.size(); j++)
    {
        ll a,b,c;
        a=vec[j].a,b=vec[j].b,c=vec[j].c;
        if(weight[b]>weight[a]+c)
        {
            weight[b]=-1;

            //fil<<weight[b]<<endl;
        }
    }

}
int main()
{
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ofstream fil;
    fil.open("input.txt");
    ll n,k=1;
    while(cin>>n)
    {

        vector<ll>busy;
        ll b=n;
        while(b--)
        {
            ll a;
            cin>>a;
            busy.push_back(a);
        }
        ll m;
        cin>>m;
        vector<node>vec;

        while(m--)
        {
            ll a,b,c;
            cin>>a>>b;
            node p;
            p.a=a,p.b=b,p.c=(busy[b-1]-busy[a-1]);
            //  fil<<busy[b-1]<<" "<<busy[a-1]<<endl;
            // double d=(double) pow(p.c,3);
            p.c=(p.c*p.c*p.c);
            // fil<<p.c<<endl;
            vec.push_back(p);
//            p.a=b,p.b=a;
//            p.c=(busy[a-1]-busy[b-1]);
//            p.c=(p.c*p.c*p.c);
//            vec.push_back(p);
        }
        ll p;
        cin>>p;
        bellman(n,vec);
        fil<<"Set #"<<k++<<endl;
        while(p--)
        {
            ll a;
            cin>>a;
            if(weight[a]>2&&weight[a]!=inf)
                fil<<weight[a]<<endl;
            else
                fil<<"?"<<endl;

        }
        memeset(weight,0);
    }

    return 0;
}

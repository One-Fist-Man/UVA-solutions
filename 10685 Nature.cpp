#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
map<string,string> parent;
map<string,ll>rnk;
string finds(string a)
{
    //cout<<a<<endl;
    if(a!=parent[a]) parent[a]=finds(parent[a]);
     return parent[a];

}
void uni(string a,string b)
{
    string p,q;
    p=finds(a);
    q=finds(b);
    //cout<<p<<" "<<q<<endl;
    if(p!=q)
    {
        if(rnk[p]>=rnk[q])
        {
             parent[q]=p;
             rnk[p]+=rnk[q];
        }
        else
        {
            parent[p]=q;
             rnk[q]+=rnk[p];
        }

    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,m;
    while(cin>>n>>m)
    {
        if(n==0&&m==0) return 0;

        while(n--)
        {
            string a;
            cin>>a;
            parent[a]=a;
            rnk[a]=1;
        }
        while(m--)
        {
            string a,b;
            cin>>a>>b;
            uni(a,b);
        }
        ll maxi=0;
        for(auto it=parent.begin(); it!=parent.end(); it++)
        {
            if(rnk[it->first]>maxi) maxi=rnk[it->first];
        }
        cout<<maxi<<endl;
        parent.clear();
        rnk.clear();
    }

    return 0;
}
//5 4
//caterpillar
//bird
//horse
//elefant
//herb
//herb caterpillar
//caterpillar bird
//bird herb
//bird horse

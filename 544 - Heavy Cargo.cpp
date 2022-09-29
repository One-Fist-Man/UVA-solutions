#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
struct node
{
    string a;
    int b;
    node (string _a,int _b)
    {
        a=_a;
        b=_b;
    }
    bool operator < (node p) const
    {
        return b<p.b;
    }
};

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,r,k=1;
    while(cin>>n>>r)
    {
        if(n==0&&r==0) return 0;
        map<string,int>visit;
        map<string,vector<node> >mp;
        while(r--)
        {
            string a,b;
            ll c;
            cin>>a>>b>>c;
            mp[a].push_back(node(b,c));
            mp[b].push_back(node(a,c));
        }

        string a,b;
        cin>>a>>b;
        // cout<<endl;
        ll maxi=0;
        //cout<<mp[a].size()<<endl;
        for(int i=0; i<mp[a].size(); i++)
        {

            if(mp[a][i].b>maxi)
                maxi=mp[a][i].b;
            //cout<<maxi<<endl;
        }

        priority_queue<node>q;

        q.push(node(a,maxi));
        while(q.empty()!=1)
        {
            node x=q.top();
            q.pop();
            if(visit[x.a])
                continue;
            visit[x.a]=1;
            if(x.b<maxi)
                maxi=x.b;
            // cout<<x.a<<" "<<x.b<<endl;
            if(x.a==b)
                break;
            for(int i=0; i<mp[x.a].size(); i++)
            {
                node y=mp[x.a][i];
                if(!visit[y.a])
                {
                    q.push(y);
                }
            }
        }
        cout<<"Scenario #"<<k++<<endl;
        cout<<maxi<<" tons"<<endl;
        cout<<endl;

    }

    return 0;
}

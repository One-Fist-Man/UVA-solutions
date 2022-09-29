#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
ofstream fil;
ll f;
map<string,ll>ans;
//void bellman(ll a,map<string,vector<string> >vec,map<string,vector<ll> >cost)
//{
//    for(auto it=ans.begin(); it!=ans.end(); it++)
//    {
//        ans[it->first]=inf;
//        level[it->first]=0;
//    }
//    ans["Calgary"]=0;
//
//    for(ll g=0; g<f-1; g++)
//    {
//        queue<string>q;
//        q.push("Calgary");
//        while(q.empty()!=1)
//        {
//            string x=q.front();
//            q.pop();
//            if(level[x]>=a+1)
//                break;
//            for(ll i=0; i<vec[x].size(); i++)
//            {
//                string y=vec[x][i];
//
//                if(ans[y]>ans[x]+cost[x][i])
//                {
//                    //fil<<ans[y]<<endl;
//
//                    ans[y]=ans[x]+cost[x][i];
//                    level[y]=level[x]+1;
//                    q.push(y);
//                }
//
//            }
//        }
//    }
//
//    if(ans["Fredericton"]==inf)
//        fil<<"No satisfactory flights"<<endl;
//    else
//        fil<<"Total cost of flight(s) is $"<<ans["Fredericton"]<<endl;
//}

void bellmans(ll a,map<string,vector<string> >vec,map<string,vector<ll> >cost,vector<string>str)
{
    for(auto it=ans.begin(); it!=ans.end(); it++)
    {
        ans[it->first]=inf;
    }
    ans["Calgary"]=0;

    for(ll g=0; g<a+1; g++)
    {
        for(ll i=0;i<vec[str[g]].size();i++)
        {
            string s;
            s=vec[str[g]][i];
            if(ans[s]>ans[str[g]]+cost[str[g]][i])
            {
                ans[s]=ans[str[g]]+cost[str[g]][i];
            }
        }

    }

    if(ans["Fredericton"]==inf)
        fil<<"No satisfactory flights"<<endl;
    else
        fil<<"Total cost of flight(s) is $"<<ans["Fredericton"]<<endl;
}
int main()
{
   // ios_base::sync_with_stdio(0), cin.tie(0), cozut.tie(0);
    fil.open("input.txt");

    ll t,k=1;
    cin>>t;
    while(t--)
    {
        vector<string>str;
        ll n;
        cin>>n;
        f=n;
        string a;
        while(n--)
        {
            cin>>a;
            str.push_back(a);
            ans[a];
        }

        ll m;
        cin>>m;
        map<string,vector<string> >vec;
        map<string,vector<ll> >cost;
        while(m--)
        {
            string a,b;
            ll c;
            cin>>a>>b>>c;
            vec[a].push_back(b);
            //vec[b].push_back(a);
            cost[a].push_back(c);
            //cost[b].push_back(c);
        }
        cin>>m;
        fil<<"Scenario #"<<k++<<endl;
        while(m--)
        {
            ll a;
            cin>>a;
            bellmans(a,vec,cost,str);
        }
        if(t!=0)
            fil<<endl;
    }


    return 0;
}

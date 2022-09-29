#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
map<ll,vector<ll> >vec;
map<ll,ll>mp,visit;

ll bfs()
{
    ll node=0;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        if(mp[it->first]==0)
        {
            cout<<111<<endl;
            node =it->first;
        }
        else if(mp[it->first]>1)
            return 0;
    }
    cout<<node<<endl;
    if(node==0)
        return 0;
    queue<ll>q;
    q.push(node);
    visit[node]=1;
    while(q.empty()!=1)
    {
        ll x=q.front();
        q.pop();
        for(ll i=0; i<vec[x].size(); i++)
        {
            ll y=vec[x][i];
            if(visit[y])
                return 0;
            q.push(y);
            visit[y]=1;
        }
    }
    return 1;
}


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ofstream fil;
    fil.open("input.txt");

    ll  n,m,k=1;
    while(cin>>n>>m)
    {
        if(n>0&&m>0)
        {
            vec[n].push_back(m);
            mp[n];
            mp[m]++;
            visit[n]=0;
            visit[m]=0;
        }
        else if(n==0&&m==0)
        {
            ll a;
            a=bfs();
            ll node=0,counti=0;
            for(auto it=visit.begin(); it!=visit.end(); it++)
            {
                if(visit[it->first]==0)
                {
                     a=0;
                     break;
                }
            }

            if(a==1)
                cout<<"Case "<<k++<<" is a tree."<<endl;
            else
                cout<<"Case "<<k++<<" is not a tree."<<endl;
            mp.clear();
            vec.clear();
            visit.clear();
        }
        else if(n<0&&m<0)
            return 0;
    }
    return 0;
}

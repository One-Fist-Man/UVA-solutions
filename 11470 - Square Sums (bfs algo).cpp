#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
ll arr[15][15];
ll visit[15][15];
ll bfs(ll i,ll n)
{
    ll sum=0;
    queue<pair<ll,ll> >q;
    if(!visit[i][i])
    q.push(make_pair(i,i));
    visit[i][i]=1;
    sum+=arr[i][i];
    ll a=i;
    while(q.empty()!=1)
    {
        pair<ll,ll> x;
        x=q.front();
        q.pop();
        if(x.first==i&&!visit[x.first][x.second+1]&&x.second+1<=n)
        {
            q.push(make_pair(x.first,x.second+1));
            sum+=arr[x.first][x.second+1];
            visit[x.first][x.second+1]=1;
        }
        else if(x.second==n&&!visit[x.first+1][x.second]&&x.first+1<=n)
        {
             q.push(make_pair(x.first+1,x.second));
            sum+=arr[x.first+1][x.second];
            visit[x.first+1][x.second]=1;
        }
else if(x.first==n&&!visit[x.first][x.second-1]&&x.second-1>=i)
        {
             q.push(make_pair(x.first,x.second-1));
            sum+=arr[x.first][x.second-1];
            visit[x.first][x.second-1]=1;
        }
        else if(x.second==i&&!visit[x.first-1][x.second]&&x.first-1>=i)
        {
             q.push(make_pair(x.first-1,x.second));
            sum+=arr[x.first-1][x.second];
            visit[x.first-1][x.second]=1;
        }
    }
    return sum;
}

ll dfs(ll i,ll n)
{
    ll sum=0;
    queue<pair<ll,ll> >q;
    if(!visit[i][i])
    q.push(make_pair(i,i));
    visit[i][i]=1;
    sum+=arr[i][i];
    ll a=i;
    while(q.empty()!=1)
    {
        pair<ll,ll> x;
        x=q.front();
        q.pop();
        if(x.first==i&&!visit[x.first][x.second+1]&&x.second+1<=n)
        {
            q.push(make_pair(x.first,x.second+1));
            sum+=arr[x.first][x.second+1];
            visit[x.first][x.second+1]=1;
        }
        else if(x.second==n&&!visit[x.first+1][x.second]&&x.first+1<=n)
        {
             q.push(make_pair(x.first+1,x.second));
            sum+=arr[x.first+1][x.second];
            visit[x.first+1][x.second]=1;
        }
else if(x.first==n&&!visit[x.first][x.second-1]&&x.second-1>=i)
        {
             q.push(make_pair(x.first,x.second-1));
            sum+=arr[x.first][x.second-1];
            visit[x.first][x.second-1]=1;
        }
        else if(x.second==i&&!visit[x.first-1][x.second]&&x.first-1>=i)
        {
             q.push(make_pair(x.first-1,x.second));
            sum+=arr[x.first-1][x.second];
            visit[x.first-1][x.second]=1;
        }
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    ll n,k=1;
    while(cin>>n)
    {
        if(!n) return 0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }
        double a=(n/2.0);
        ll len=ceil(a);
        //cout<<len<<endl;
        n--;
        cout<<"Case "<<k++<<": ";
        for(ll i=0; i<len; i++)
        {
            ll sum=bfs(i,n);


            if(i==0)
                cout<<sum;
            else
                cout<<" "<<sum;
            n--;
        }
            cout<<endl;
        memeset(arr,0);
        memeset(visit,0);
    }

    return 0;
}

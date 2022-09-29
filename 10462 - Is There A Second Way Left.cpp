#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
vector<ll>arr[105][105];

struct node
{
    ll a,b;
    node (ll _a,ll _b)
    {
        a=_a,b=_b;
    }
    bool operator < (node p) const
    {
        return b>p.b;
    }
};
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ofstream fil;
    fil.open("input.txt");

    // vector< vector< edge > >vec(105);
    ll t,l=1;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        while(m--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            arr[a][b].push_back(c);
            arr[b][a].push_back(c);
        }
        ll nsway=0;
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=n; j++)
            {

                if(arr[i][j].size()>1)
                {
                    sort(arr[i][j].begin(),arr[i][j].end());
                    //sort(arr[j][i].begin(),arr[j][i].end());
                    nsway=1;
                    //cout<<"erase "<<arr[i][j][0]<<endl;
//                    cout<<endl;
//                    for(int g=0; g<arr[i][j].size(); g++)
//                        cout<<arr[i][j][g]<<" ";
//                    cout<<endl;
                    auto it=arr[i][j].begin();
                    arr[i][j].erase(it);
//                    for(int g=0; g<arr[i][j].size(); g++)
//                        cout<<arr[i][j][g]<<" ";
//                    cout<<endl;
                    //cout<<"erase DONE "<<arr[i][j][0]<<endl;
                    // arr[j][i].erase(arr[j][i].begin());
                }
            }

        }

        ll visit[n+1];
        memeset(visit,0);
        ll path[n+1];
        for(ll i=1; i<=n; i++)
            path[i]=inf;

        priority_queue<node>q;
        q.push(node(1,0));
        path[1]=0;
        while(q.empty()!=1)
        {
            node x=q.top();
            q.pop();
            if(visit[x.a])
                continue;
            visit[x.a]=1;
            for(ll i=1; i<=n; i++)
            {
                if(arr[x.a][i].size()!=0)
                {
                    if(visit[i])
                        continue ;
                    ll g=arr[x.a][i][0];
                    if(path[i]>g)
                    {
                        path[i]=g;
                        q.push(node(i,g));
                    }
                }
            }

        }

        ll flag=0;
        for(ll i=1; i<=n; i++)
        {

            if(visit[i]==0)
                flag=1;
        }
        fil<<"Case #"<<l++<<" : ";
        if(flag==1)
            fil<<"No way"<<endl;
        else if(nsway==0)
            fil<<"No second way"<<endl;
        else if(nsway==1)
        {
            ll sum=0;
            for(ll i=1; i<=n; i++)
                sum+=path[i];
            fil<<sum<<endl;
        }
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=n; j++)
                arr[i][j].clear();
        }
    }




    return 0;
}

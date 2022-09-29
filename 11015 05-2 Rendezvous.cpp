#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,m,p=1;

    while(cin>>n>>m)
    {
        if(n==0) return 0;
        vector<string>name;
        for(ll i=0;i<n;i++)
        {
            string a;
            cin>>a;
            name.push_back(a);
        }
        //vector<ll>vec(n);
        ll cost[n+1][n+1];
        memeset(cost,0);
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                if(i!=j)
                cost[i][j]=inf;
            }
        }
        while(m--)
        {
            ll i,j,k;
            cin>>i>>j>>k;
           // vec[i].push_back(j);
            //vec[j].push_back(i);
            cost[i][j]=k;
            cost[j][i]=k;
        }

        for(ll k=1;k<=n;k++)
        {
            for(ll i=1;i<=n;i++)
            {
                for(ll j=1;j<=n;j++)
                {
                    if(cost[i][j]>cost[i][k]+cost[k][j])
                    {
                        cost[i][j]=cost[i][k]+cost[k][j];
                    }
                }
            }
        }
        ll sum=0,maxi=inf;
        ll mini=0;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                if(cost[i][j]!=inf) sum+=cost[i][j];
            }
            //cout<<sum<<endl;
            if(maxi>sum)
            {
                maxi=sum;
                mini=i-1;
            }
            sum=0;
        }
        cout<<"Case #"<<p++<<" : "<<name[mini]<<endl;
    }

    return 0;
}

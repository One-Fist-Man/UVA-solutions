#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll c,r,q,p=1;
    while(cin>>c>>r>>q)
    {
        if(!c&&!r&&!q)
            return 0;
        vector<ll>val;
        for(ll i=0; i<c; i++)
        {
            ll a;
            cin>>a;
            val.push_back(a);
        }
        ll cost[c+1][c+1],fcost[c+1][c+1];
        memeset(fcost,0);
        for(ll i=1; i<=c; i++)
        {
            for(ll j=1; j<=c; j++)
            {
                if(i!=j)
                {
                    cost[i][j]=inf;
                    fcost[i][j]=max(val[i-1],val[j-1]);
                }
                else
                {
                    cost[i][j]=0;
                    fcost[i][j]=max(val[i-1],val[j-1]);
                }
            }
        }
        while(r--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            // ll maxi=max(val[a-1],val[b-1]);
            fcost[a][b]=max(val[a-1],val[b-1]);
            fcost[b][a]=fcost[a][b];
            cost[a][b]=c+fcost[a][b];
            cost[b][a]=c+fcost[b][a];
        }
        for(ll k=1; k<=c; k++)
        {
            for(ll i=1; i<=c; i++)
            {
                for(ll j=1; j<=c; j++)
                {
                    if(cost[i][j]>cost[i][k]+cost[k][j])
                    {
                        cost[i][j]=(cost[i][k]-fcost[i][k])+(cost[k][j]-fcost[k][j]);
                        fcost[i][j]=max(fcost[i][k],max(fcost[k][j],fcost[i][j]));
                        cost[i][j]+=fcost[i][j];
                    }
                }
            }
        }

        for(ll k=1; k<=c; k++)
        {
            for(ll i=1; i<=c; i++)
            {
                for(ll j=1; j<=c; j++)
                {
                    if(cost[i][j]>cost[i][k]+cost[k][j])
                    {
                        cost[i][j]=(cost[i][k]-fcost[i][k])+(cost[k][j]-fcost[k][j]);
                        fcost[i][j]=max(fcost[i][k],max(fcost[k][j],fcost[i][j]));
                        cost[i][j]+=fcost[i][j];
                    }
                }
            }
        }
        cout<<"Case #"<<p++<<endl;
        while(q--)
        {
            ll a,b;
            cin>>a>>b;
            if(cost[a][b]==inf)
                cout<<-1<<endl;
            else
                cout<<cost[a][b]<<endl;
        }
    }
    return 0;
}

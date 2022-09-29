#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
ll arr[15][15];
ll visit[15][15];
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    ll n,k=1;
    while(cin>>n)
    {
        if(!n) return 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }
        double a=(n/2.0);
        ll len=ceil(a);
        //cout<<len<<endl;
        n--;
        cout<<"Case "<<k++<<": ";
        for(int i=0; i<len; i++)
        {
            ll sum=0;
            for(int j=i; j<=n; j++)
            {
                if(!visit[i][j])
                {
                    sum+=arr[i][j];
                    visit[i][j]=1;
                }
            }
            if(!visit[i+1][i])
                for(int j=i+1; j<n; j++)
                {
                    if(!visit[j][i])
                    {
                        sum+=arr[j][i];
                        visit[j][i]=1;
                    }
                }
            if(!visit[i+1][n])
                for(int j=i+1; j<n; j++)
                {
                    if(!visit[j][n])
                    {
                        sum+=arr[j][n];
                        visit[j][n]=1;
                    }
                }
            for(int j=i; j<=n; j++)
            {
                if(!visit[n][j])
                {
                    sum+=arr[n][j];
                    visit[n][j]=1;
                }
            }
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

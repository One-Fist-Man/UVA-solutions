#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
ll arr[105][105];
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll a,b,k=1;
    while(cin>>a>>b)
    {
        //cout<<a<<" "<<b<<endl;
        if(!a&&!b)
            break;
        set<ll>st;
        for(ll i=1; i<=100; i++)
        {
            for(ll j=1; j<=100; j++)
            {
                if(i==j)
                    arr[i][j]=0;
                else
                    arr[i][j]=inf;
            }
        }
        arr[a][b]=1;
        while(cin>>a>>b)
        {
            if(!a&&!b)
                break;
            arr[a][b]=1;
            st.insert(a);
            st.insert(b);
        }


        for(ll i=1; i<=100; i++)
        {
            for(ll j=1; j<=100; j++)
            {
                for(ll k=1; k<=100; k++)
                {
                    if(arr[i][j]>arr[i][k]+arr[k][j])
                    {
                        arr[i][j]=arr[i][k]+arr[k][j];
                    }
                }
            }
        }
        ll sum=0;
        for(ll i=1; i<=100; i++)
        {
            for(ll j=1; j<=100; j++)
            {
                if(arr[i][j]!=0&&arr[i][j]!=inf)
                {
                    sum+=arr[i][j];
                }
            }
        }

        ll g=st.size();
        //cout<<st.size()<<endl;
        // cout<<sum<<endl;
        double p=((sum*1.0)/((g-1)*g));
        cout<<"Case "<<k++<<": average length between pages = "<<fixed<<setprecision(3)<<p<<" clicks"<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n;
    cin>>n;
    ll arr[n+1][n+1];
    memeset(arr,0);

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            if(i==j)
                break;
            string a;
            cin>>a;
            //cout<<a<<endl;
            if(a=="x")
            {
                arr[i][j]=inf;
                arr[j][i]=inf;
            }
            else
            {
                stringstream ss;
                ll b;
                ss<<a;
                ss>>b;
                arr[j][i]=arr[i][j]=b;
            }
        }
    }

//    for(ll i=0; i<n; i++)
//    {
//        for(ll j=0; j<n; j++)
//        {
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    cout<<endl;
    for(ll k=0; k<n; k++)
    {
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(arr[i][j]>arr[i][k]+arr[k][j])
                {
                    arr[i][j]=arr[i][k]+arr[k][j];
                }
            }
        }
    }
    ll maxi=0;
    for(ll i=0;i<n;i++) maxi=max(maxi,arr[0][i]);
    cout<<maxi<<endl;

//    for(ll i=0; i<n; i++)
//    {
//        for(ll j=0; j<n; j++)
//        {
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    cout<<endl;

    return 0;
}

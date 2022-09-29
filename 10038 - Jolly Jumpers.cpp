#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n)
    {
        int arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll sum=arr[1]-arr[0],flag=0;
        for(ll i=2;i<n;i++)
        {
            if(arr[i]-arr[i-1]!=sum)
            {
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"Not jolly"<<endl;
        else cout<<"Jolly"<<endl;
    }

    return 0;
}

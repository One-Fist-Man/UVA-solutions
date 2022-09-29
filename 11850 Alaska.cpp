#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n;
    while(cin>>n)
    {
        if(n==0) return 0;
        ll flag=0;
        int arr[n];
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
//    for(ll i=0;i<n;i++) cout<<arr[i]<<" ";
        ll sum=arr[0],maxi=0;
        for(ll i=1; i<n; i++)
        {
            if(abs(sum-arr[i])>200)
                flag=1;
            sum=arr[i];
        }
        if(flag==0 &&arr[n-1]>1222)
            cout<<"POSSIBLE"<<endl;
        else
            cout<<"IMPOSSIBLE"<<endl;
    }


    return 0;
}

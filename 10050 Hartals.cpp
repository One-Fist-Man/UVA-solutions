#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t ;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int arr[n];
        fill(arr,arr+n,0);
        ll p;
        cin>>p;
        //int arr2[p];
        for(ll j=0; j<p; j++)
        {
            ll a;
            cin>>a;
            for(ll i=0; i<n; i++)
            {

                if((i+1)%a==0)
                {
                    arr[i]=1;
                }
            }
        }

        // for(int i=0;i<n;i++) cout<<" "<<i<<":"<<arr[i]<<" ";

        ll counti=0;
        for(ll i=0; i<n; i++)
        {
            if(arr[i]==1)
            {
                counti++;
                if((i+1)%7==0||(i+1)%7==6)
                {
                    counti--;
                }
            }
        }
        cout<<counti<<endl;
    }




    return 0;
}

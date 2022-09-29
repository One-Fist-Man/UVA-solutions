#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,l=1;
    while(cin>>t)
    {
        if(t==0) return 0;
        int arr[t];
        ll sum=0;
        for(int i=0; i<t; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        ll avg=sum/t,sum2=0;

        for(int i=0; i<t; i++)
        {
            if(arr[i]<avg)
                sum2+=(avg-arr[i]);
        }
        cout<<"Set #"<<l<<endl;
        cout<<"The minimum number of moves is "<<sum2<<"."<<endl;
        l++;
        cout<<endl;
    }



    return 0;
}

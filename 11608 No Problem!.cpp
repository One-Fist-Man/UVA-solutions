#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll sum,k=1;
    while(cin>>sum)
    {
        if(sum<0) return 0;
        int arr1[13],arr2[13];

        for(ll i=0; i<12; i++)
            cin>>arr1[i];

        for(ll i=0; i<12; i++)
            cin>>arr2[i];

            cout<<"Case "<<k<<":"<<endl;

        for(ll i=0; i<12; i++)
        {
            if(sum>=arr2[i])
            {
                cout<<"No problem! :D"<<endl;
                sum-=arr2[i];
            }
            else
                cout<<"No problem. :("<<endl;

            sum+=arr1[i];
        }
        k++;
    }

    return 0;
}

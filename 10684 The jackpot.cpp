#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0) return 0;
        ll sum=0,maxi=0;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            sum+=a;
            if(sum<0) sum=0;
            if(maxi<sum)
                maxi=sum;

        }
        if(maxi>0)
            cout<<"The maximum winning streak is "<<maxi<<"."<<endl;
        else
            cout<<"Losing streak."<<endl;
    }


    return 0;
}

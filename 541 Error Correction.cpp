#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0) return 0;
        int arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cin>>arr[i][j];
        }

        int sum=0,a,b,counti1=0,counti2=0;

        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
               sum+=arr[i][j];
            }
            //cout<<sum<<endl;
            if(sum%2!=0)
            {
               a=i+1;
                counti1++;
            }
        }

        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
               sum+=arr[j][i];
            }
            //cout<<sum<<endl;
            if(sum%2!=0)
            {
               b=i+1;
                counti2++;
            }
        }

        if(counti1==0&&counti2==0) cout<<"OK"<<endl;
        else if(counti1<2&&counti2<2) cout<<"Change bit ("<<a<<","<<b<<")"<<endl;
        else cout<<"Corrupt"<<endl;
    }

    return 0;
}

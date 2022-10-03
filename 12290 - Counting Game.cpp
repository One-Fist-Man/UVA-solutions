#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f 1000000000
int main()
{
    ll n,m,k;
    while(cin>>n>>m>>k)
    {
        if(n==0&&m==0&&k==0) return 0;

        ll counti1=0,flag=0,counti2=0,i=0,ans=0;
        while(counti1!=k&&ans<f)
        {
            //cout<<ans<<endl;
            ans++;
            if(flag==0)
            {
                i++;
                if(i==n)
                {
                    flag=1;
                }
            }
            else if(flag==1)
            {
                i--;
                if(i==1)
                    flag=0;
            }

            //cout<<i<<endl;
            if(i==m&&ans%7==0)
            {
                counti1++;
            }

            else if(i==m)
            {
                int a=ans;
                while(a!=0)
                {
                    int b=a%10;
                    if(b==7)
                    {
                        counti1++;
                        break;
                    }
                    a/=10;
                }
            }

        }
        if(counti1!=k) cout<<-1<<endl;
        else
        cout<<ans<<endl;
    }




    return 0;
}


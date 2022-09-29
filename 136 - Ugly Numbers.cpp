#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10000000000,val=0,counti=1;
    //cout<<n<<endl;
    for(int i=2;i<=n;i++)
    {
        int ans=i,flag=0;
        while(ans!=1)
        {
            //cout<<ans<<endl;
            if(ans%2==0)
            {
                ans=ans/2;
            }
            else if(ans%3==0)
            {
                ans=ans/3;
            }
            else if(ans%5==0)
            {
                ans=ans/5;
            }
            else
            {
                ans=1;
                flag=1;
            }
        }


        if(flag==0)
        {
            counti++;
        }
        //cout<<counti<<endl;
        if(counti==1500)
        {
            val=i;
            break;
        }
    }
    cout<<val<<endl;

    return 0;
}

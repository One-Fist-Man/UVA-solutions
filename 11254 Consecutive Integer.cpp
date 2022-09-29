#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==-1)
            return 0;
        vector<ll>vec;
        ll sum=0,i=0,k=0,j=0;
        while(sum!=n)
        {
            if(i==sum&&(i+i)>=n)
            {
                i=n;
                vec[k]=n;
                break;
            }


            if(sum>n)
            {
                sum-=vec[k];
                k++;
            }
            else
            {
                i++;
                vec.push_back(i);
                sum+=i;
            }

        }
        cout<<n<<" = "<<vec[k]<<" + ... + "<<i<<endl;

    }

    return 0;
}

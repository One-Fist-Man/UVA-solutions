#include<bits/stdc++.h>
#define k 1005
using namespace std;
typedef long long ll;
vector<int>vec;
int arr[k+5];
void seive()
{
    for(int i=3; i*i<=k; i+=2)
    {
        if(arr[i]==0)
        {
            for(int j=i*i; j<=k; j+=i)
            {
                arr[j]=1;
            }
        }
    }

    vec.push_back(2);
    for(int i=3; i<=k; i+=2)
    {
        if(arr[i]==0)
            vec.push_back(i);
    }
}

int divcnt(int n)
{
    int counti=0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            counti++;
            while(n%i==0)
            {
                n/=i;

            }
            // cout<<vec[i]<<endl;
        }

    }
    if(n!=1)
        counti++;

    return counti;
}
int main()
{
   // seive();
    ll n;
    while(cin>>n)
    {
        if(n==0) return 0;

        int counti=0;
        counti= divcnt(n);
        cout<<n<<" : "<<counti<<endl;
    }


    return 0;
}


#include<bits/stdc++.h>
#define k 1005
using namespace std;
typedef  long long ll;
vector<ll>vec;
bool arr[k+5];
void seive()
{
    for(ll i=3; i*i<=k; i+=2)
    {
        if(arr[i]==0)
        {
            for(ll j=i*i; j<=k; j+=i)
            {
                arr[j]=1;
            }
        }
    }
    vec.push_back(2);
    for(ll i=3; i<=k; i+=2)
        if(arr[i]==0)
            vec.push_back(i);
//
//    for(ll i=0; i<vec.size(); i++)
//    {
//        cout<<vec[i]<< " ";
//
//    }
//    cout<<endl;
}

int div(ll n)
{
    ll counti=0,counti2=0;
    for(ll i=0; vec[i]*vec[i]<=n&&i<vec.size(); i++)
    {
        counti=0;
        if(n%vec[i]==0)
        {
            counti2++;
            while(n%vec[i]==0)
            {
                counti++;
                n/=vec[i];
            }
        }
        if(counti>1)
        {
            return 0;
        }
    }
    //cout<<n<<endl;
    if(n!=1)
        counti2++;

    if(counti2%2==0)
        return 1;
    else
        return -1;

}
//
//int divcnt(int n)
//{
//
//    ll counti=0,counti2=0;
//    for(ll i=2; i*i<=n; i++)
//    {
//        counti=0;
//        if(n%i==0)
//        {
//            counti2++;
//            while(n%i==0)
//            {
//                counti++;
//                n/=i;
//            }
//        }
//        if(counti>1)
//        {
//            return 0;
//        }
//    }
//    //cout<<n<<endl;
//    if(n!=1)
//        counti2++;
//
//    if(counti2%2==0)
//        return 1;
//    else
//        return -1;
//}

int main()
{
     seive();
    vector<int>v1,v2;
    int sum=0;
    for(int i=1; i<=1000000; i++)
    {
        int a=div(i);
        v1.push_back(a);
        sum+=a;
        // cout<<sum<<endl;
        v2.push_back(sum);
    }
    int n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        cout<<setw(8)<<n<<setw(8)<<v1[n-1]<<setw(8)<<v2[n-1]<<endl;
    }


//  for(int i=0;i<10;i++) cout<<i<<" "<<v2[i]<<"   ";



    return 0;
}

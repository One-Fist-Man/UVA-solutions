#include<bits/stdc++.h>
#define t 774
using namespace std;
typedef long long ll;
//vector<ll>vec;
//bool arr[t+1];

//void seive()
//{
//    for(ll i=3; i*i<=t; i+=2)
//    {
//        if(arr[i]==0)
//        {
//            for(ll j=i*i; j<=t; j+=i)
//                arr[j]=1;
//        }
//    }
//    vec.push_back(2);
//    for(ll i=3; i<=t; i+=2)
//    {
//        if(arr[i]==0)
//            vec.push_back(i);
//    }
//}
//void divisor(ll n)
//{
//    ll sum=0;
//    ll div=1;
//    for(ll i=0; vec[i]<n; i++)
//    {
//        ll counti=1;
//        if(n%vec[i]==0)
//        {
//            while(n%vec[i]==0)
//            {
//                counti++;
//                n/=vec[i];
//            }
//            double p=pow(vec[i],counti);
//            sum=(p-1)/(vec[i]-1);
//            div*=sum;
//        }
//        if(n!=1) div*=(pow(n,2)-1)/(n-1);;
//
//        cout<<vec[i]<<" "<<counti<<endl;
//
//        cout<<n<<endl;
//    }
//    cout<<n<<endl;
//    if(n!=1) sum+=(pow(n,2)-1)/(n-1);
//    cout<<div<<endl;
//}

void divisor(ll n)
{
    ll sum=1;
    for(ll i=2; i*i<=n; i++)
    {
        if(i*i==n)
            sum+=i;
        else if(n%i==0)
        {
            sum+=i;
            sum+=(n/i);
        }
    }
    cout<<setw(5)<<n<<"  ";
    if(n==1) cout<<"DEFICIENT"<<endl;
    else if(sum==n)
        cout<<"PERFECT"<<endl;
    else if(sum<n)
        cout<<"DEFICIENT"<<endl;
    else if(sum>n)
        cout<<"ABUNDANT"<<endl;
}
int main()
{

   vector<ll>vec;
   ll n=1;

   while(1)
   {
       cin>>n;
       if(n==0) break;
       vec.push_back(n);
   }
   if(vec.size()==0) return 0;

        cout<<"PERFECTION OUTPUT"<<endl;
        for(int i=0;i<vec.size();i++)
        {
            divisor(vec[i]);
        }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}


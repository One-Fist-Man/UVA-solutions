#include<bits/stdc++.h>
#define k 2000000
using namespace std;
typedef  long long ll;
vector<ll>vec,vec2,totient(k+1);
map<int,int>mp;
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

}

ll div(ll n)
{
    ll p=n;
//    for(int i=2;i*i<=n;i++)
//    {
//        if(n%i==0)
//        {
//            p*=(double) ((i-1.0)/i);
//            while(n%i==0)
//            {
//                n/=i;
//            }
//        }
//    }

    for(ll i=0;vec[i]*vec[i]<=n&&i<vec.size()&&n!=1; i++)
    {


        if(n%vec[i]==0)
        {
            p-=p/vec[i];
            while(n%vec[i]==0)
            {
                n/=vec[i];
                //cout<<n<<endl;
            }
        }
    }

  if(n!=1) p-=p/n;
  //cout<<p<<endl;

  //counti=0;
 // if(p)
  //if(p>=2) div(p);
  return  p;

}
void Euler_totient() {
    for (int i = 0; i <= k; i++)
        totient[i] = i;

    for (int i = 2; i <= k; i++)
        if (totient[i] == i) {
            for (int j = i; j <= k; j += i)
                totient[j] -= totient[j] / i;
        }
}
int counts=0;
int cnt(int a)
{
    if(mp[a]!=0) return counts=mp[a];

    if(a==1)
        return counts=0;
        else cnt(totient[a]);
        counts++;
    mp[a]=counts;
    //cout<<a<<" "<<mp[a]<<endl;
}

int main()
{
   // seive();
    Euler_totient();
    vector<ll>v1;

    ll sum=0;
    for(ll i=2;i<=2000000;i++)
    {
        ll counti=i,c=0,counts=0;
            if(mp[counti]==0)
            {
                cnt(counti);
                counts=0;
            }
            //cout<<mp[i]<<endl;
       sum+=mp[counti];

      v1.push_back(sum);
    }

    //for(ll i=0;i<v1.size();i++) cout<<v1[i]<<" ";
    ll m,n;
    cin>>m>>n;
    if(m==2) cout<<v1[n-2]<<endl;
   else cout<<(v1[n-2]-v1[m-3])<<endl;

//cnt(13);
//for(auto it=mp.begin();it!=mp.end();it++) cout<<it->first<<" "<<it->second<<endl;



    return 0;
}

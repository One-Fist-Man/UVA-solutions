#include<bits/stdc++.h>
#define n 46350
using namespace std;
typedef long long ll;
vector<ll>vec,vec2;
bool arr[n];
void seive()
{
    for(ll i=3; i*i<=n; i+=2)
    {
        if(arr[i]==0)
        {
            for(ll j=i*i; j<=n; j+=i)
                arr[j]=1;
        }
    }
    vec.push_back(2);
    for(ll i=3; i<=n; i+=2)
        if(arr[i]==0)
            vec.push_back(i);

    //for(ll i=0;i<vec.size();i++) cout<<vec[i]<<" ";
}

void segseive(ll l,ll r )
{
    ll k=r-l+1;
    //cout<<k<<endl;
    vector<ll> arr2(k,0);
   // fill(arr2,arr2+k,0);
//     for(ll i=0;i<k;i++) cout<<arr2[i]<<" ";
//     cout<<endl;
    if(l==1)
        arr2[0]=1;
    for(ll i=0; vec[i]*vec[i]<=r; i++)
    {
        ll crntprm=vec[i];
        //cout<<"crnt "<<crntprm<<endl;
        ll base=(l/crntprm)*crntprm;
       // cout<<"base "<<base<<endl;
        if(base<l)
            base+=crntprm;
            ll j ;
        for(j=base; j<=r; j+=crntprm)
        {
            arr2[j-l]=1;
            // cout<<j-l<<endl;
        }
       // cout<<j-l<<endl;
        //cout<<
        if(base==crntprm)
            arr2[base-l] =0;
    }
    for(ll i=0; i<k; i++)
        if(arr2[i]==0)
        {
           // cout<<arr2[i]<<" "<<i<<" ";
            //if(l+i!=r)
                vec2.push_back(l+i);
        }
   // cout<<vec2.size()<<endl;
    //for(int i=0;i<vec2.size();i++) cout<<vec2[i]<<" ";

    ll maxi=0,mini=INT_MAX,a=0,b=0,c=0,d=0;
    for(ll i=1; i<vec2.size(); i++)
    {
        int g=(vec2[i]-vec2[i-1]);
        if(g>maxi)
        {
            maxi=g;
            c=vec2[i-1];
            d=vec2[i];
        }
        if(g<mini)
        {
            mini=g;
            a=vec2[i-1];
            b=vec2[i];
        }

    }
    //cout<<vec2.size()<<endl;
    if(vec2.size()<2) cout<<"There are no adjacent primes."<<endl;
    else cout<<a<<","<<b<<" are closest, "<<c<<","<<d<<" are most distant."<<endl;
//    for(ll i=0; i<vec2.size(); i++)
//        cout<<vec2[i]<<" ";

//    for(ll i=0; i<vec2.size(); i++)
//        cout<<vec2[i]<<" ";

}

int main()
{
    seive();
    ll l,r;
    while(cin>>l>>r)
    {
        segseive(l,r);
        vec2.clear();
    }



    return 0;
}

#include<bits/stdc++.h>
#define k 56350
using namespace std;
typedef long long ll;
vector<ll>vec,vec2;
ll arr[k+5];
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

//        for(ll i=0;i<vec.size();i++) cout<<vec[i]<<" ";
//
//        cout<<endl;
}
int get_pow(int n,int p)
{
    int res=0;
    for(int i=p; i<=n; i*=p)
        res+=n/i;

    return res;
}
void div(ll n)
{
    for(ll i=0; vec[i]*vec[i]<=n&&n!=1&&i<vec.size(); i++)
    {
        if(n%vec[i]==0)
        {
            while(n%vec[i]==0)
            {
                vec2.push_back(vec[i]);
                n/=vec[i];
            }
        }

    }
    if(n!=1)
        vec2.push_back(n);
}
int main()
{
    seive();

    ll n,m;
    while(cin>>n>>m)
    {
        if(m==0)
            cout<<m<<" does not divide "<<n<<"!"<<endl;
        else
        {
            map<ll,ll>mp1,mp2;
            div(m);
            for(ll i=0; i<vec2.size(); i++)
                mp1[vec2[i]]++;

            // for(auto i=mp1.begin(); i!=mp1.end(); i++) cout<<i->first<<" "<<i->second<<endl;

            //cout<<endl<<endl;

            vec2.clear();
//        for(ll i=2; i<=n; i++)
//        {
//            int a=i;
            for(auto j=mp1.begin(); j!=mp1.end(); j++)
            {
//                if(a%(j->first)==0)
//                {
//                    while(a%(j->first)==0)
//                    {
//                        mp2[j->first]++;
//                        //cout<<j->first<<endl;
//                        a/=j->first;
//                    }
//                }

                int a=get_pow(n,j->first);
                mp2[j->first]=a;
            }
            // }
            //for(ll i=0; i<vec2.size(); i++)
            //mp2[vec2[i]]++;

            // for(auto i=mp2.begin(); i!=mp2.end(); i++) cout<<i->first<<" "<<i->second<<endl;
            ll flag=0;
            for(auto i=mp1.begin(); i!=mp1.end(); i++)
            {
                if((i->second)>(mp2[i->first]))
                    flag=1;
            }

            if(flag==1)
                cout<<m<<" does not divide "<<n<<"!"<<endl;
            else
                cout<<m<<" divides "<<n<<"!"<<endl;

        }


    }



    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ff                first
#define ss                second
#define pii               pair<int,int>
#define mk                make_pair
#define ll                long long
#define ull               unsigned long long
#define pb                push_back
#define fast_in_out       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define maxi 10000
struct val
{
    int x,y;
};

int main()
{

    fast_in_out;
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,q;
        cin>>p>>q;
        for(int i=1; i<maxi; i++)
        {
            vector<int>vec;
            ll flag=0,flag2=0,counti=0,counti2=1,j=0;
            ll n=i;
            vec.push_back(n%2);
            //cout<<n%2<<endl;
            while(n!=0)
            {
                int a=n/2;
                //cout<<a%2<<endl;
                vec.push_back(a%2);

                // cout<<n%2<<endl;
                if(n%2==1)
                {
                    if(j>0)
                    {
                        if(vec[j-1]==0)
                            flag=1;
                    }
                    if(j<maxi)
                    {
                        if(vec[j+1]==0)
                            flag2=1;
                    }
                    if(flag==0&&flag2==0)
                        break;
                    else
                        counti++;
                }
                else
                    counti2++;
                j++;
                n=n/2;
            }


            if(counti==p&&counti2==q)
            {
                cout<<i<<endl;
                break;
            }

        }
    }


    return 0;
}

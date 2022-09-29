#include<bits/stdc++.h>
#define k 46350
using namespace std;
typedef  long long ll;
vector<ll>vec,vec2;
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
//    for(ll i=0;i<vec.size();i++)
//    {
//        cout<<vec[i]<< " ";
//
//    }
//    cout<<endl;
}

void div(ll n)
{
    //cout<<n<<endl;
    ll p=n;
    if(n<0)
        n*=-1;

    for(ll i=0; vec[i]*vec[i]<=n,i<vec.size()&&n!=1; i++)
    {

        //  cout<<vec[i]<<" ";
        if(n%vec[i]==0)
        {
            while(n%vec[i]==0)
            {
                vec2.push_back(vec[i]);
                n/=vec[i];
                //cout<<n<<endl;
            }
        }
    }

    if(n!=1)
        vec2.push_back(n);

}

int main()
{
    seive();
    ll n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        div(n);
        cout<<n<<" = ";
        int flag=0;
        if(n<0)
        {
            cout<<"-1";
            flag=1;
        }
        if(vec2.size()==0&&n==1)
            cout<<1;


        for(ll i=0; i<vec2.size(); i++)
        {
            if(flag==1)
                cout<<" x ";
            else
                flag=1;
            cout<<vec2[i];

        }
        cout<<endl;
        vec2.clear();

    }


    return 0;
}


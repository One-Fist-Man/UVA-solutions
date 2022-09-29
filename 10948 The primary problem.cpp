#include<bits/stdc++.h>
#define t 1000005
using namespace std;
typedef long long ll;
vector<ll>vec2;
bool vec[t+1];
void seive()
{
    vec2.push_back(2);
    for(ll i=3; i<=t; i+=2)
    {
        if(vec[i]==0)
        {
            for(ll j=i*i; j<=t; j+=i)
            {
                vec[j]=1;
            }
        }
    }
    for(ll i=3; i<=t; i+=2)
    {
        if(vec[i]==0)
            vec2.push_back(i);
    }
//      for(ll i=0;i<vec2.size();i++)
//      {
//          cout<<vec2[i]<<" ";
//      }
//      cout<<endl;
}
ll binsrch(ll n)
{
    ll s=0,e=vec2.size()-1;
    while(s<=e)
    {
        ll mid=(s+e)/2;
        if(vec2[mid]==n)
        {
            return mid;
        }
        else if(vec2[mid]>n)
            e=mid-1;
        else
            s=mid+1;
    }
    return e;
}
int main()
{
    fstream fil;
    fil.open("my.txt");
    seive();
    ll n;
    while(cin>>n)
    {
        if(n==0)
            break;

        int pos=binsrch(n);
        //cout<<pos<<" "<<vec2[pos]<<endl;
        if(vec2[pos]==n)
            pos--;

        ll k=pos,j=k;
        ll flag=0,a=0,b=0;
        for(ll i=0; i<=k/2;)
        {
//                cout<<vec2[i]<<" "<<vec2[j]<<endl;
//                cout<<vec2[i]+vec2[j]<<endl;
                if(vec2[i]+vec2[j]==n)
                {
                    flag=1;
                    a=vec2[i];
                    b=vec2[j];
                    break;
                }
                else if(vec2[i]+vec2[j]<n)
                {
                    i++;
                }
                else j--;

        }

//        for(ll i=0; i<=k; i++)
//        {
//            for(ll j=k; j>=i; j--)
//            {
//            cout<<vec2[i]<<" "<<vec2[j]<<endl;
//            cout<<vec2[i]+vec2[j]<<endl;
//                if(vec2[i]+vec2[j]==n)
//                {
//                    flag=1;
//                    a=vec2[i];
//                    b=vec2[j];
//                    break;
//                }
//                else if(vec2[i]+vec2[j]<n)
//                    break;
//            }
//            if(flag==1)
//                break;
//        }
        if(flag==1 )
        {
            cout<<n<<":"<<endl;
            cout<<a<<"+"<<b<<endl;
        }

        else
        {
            cout<<n<<":"<<endl;
            cout<<"NO WAY!"<<endl;
        }



    }

    return 0;
}

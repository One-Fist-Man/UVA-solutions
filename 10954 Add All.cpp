#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{


    ll n;
    while(cin>>n)
    {
        if(n==0) return 0;
        priority_queue<ll, vector<ll>,greater<ll> >q;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            q.push(a);
        }
        ll sum=0;
        while(q.empty()!=1)
        {

            ll a=q.top();
           // cout<<a<<endl;
            q.pop();
            ll b=q.top();
            q.pop();
            a=a+b;
            sum+=a;
            if(q.empty()!=1)
            q.push(a);
        }
        cout<<sum<<endl;
    }


    return 0;
}


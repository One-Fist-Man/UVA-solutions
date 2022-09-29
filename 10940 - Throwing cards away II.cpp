#include<bits/stdc++.h>
#define t 774
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    while(cin>>n)
    {
        queue<ll>q;
        if(n==0 )return 0;
        for(int i=1; i<=n; i++)
        {
            q.push(i);
        }
        for(int i=0; q.size()!=1; i++)
        {
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout<<q.front()<<endl;
    }


    return 0;
}


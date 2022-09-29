#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll p;
    while(cin>>p)
    {
        if(p==0) return 0;
        int n,m;
        cin>>n>>m;
        for(int i=0;i<p;i++)
        {
            int a,b;
            cin>>a>>b;
            if(a>n&&b>m) cout<<"NE"<<endl;
            else if(a<n&&b>m) cout<<"NO"<<endl;
            else if(a>n&&b<m) cout<<"SE"<<endl;
            else if(a<n&&b<m) cout<<"SO"<<endl;
            else if(a==n||b==m) cout<<"divisa"<<endl;
        }

    }

    return 0;
}

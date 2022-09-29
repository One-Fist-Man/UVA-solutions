#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,maxi=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x>maxi)maxi=x;
        }
        cout<<"Case "<<i<<": "<<maxi<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,low=0,high=0;
        cin>>n;
        int x;
        cin>>x;
        for(int j=1;j<n;j++)
        {
           int b;
           cin>>b;
           if(x-b>0) low++;
           else if(x-b<0)high++;
           x=b;
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
    }



    return 0;
}

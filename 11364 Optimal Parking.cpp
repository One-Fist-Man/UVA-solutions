#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int maxi=0,mini=105;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x>maxi) maxi=x;
            if(mini>x) mini=x;
        }
        int a=maxi-mini;
        cout<<a*2<<endl;
    }
    return 0;
}

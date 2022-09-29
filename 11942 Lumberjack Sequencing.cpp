#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cout<<"Lumberjacks:"<<endl;
    cin>>t;
    while(t--)
    {
        int x,high=1,low=1;
        cin>>x;
        for(int i=1;i<10;i++)
        {
           int b;
           cin>>b;
           if(x>b) high++;
           else low++;
           x=b;
        }
        if(high==10||low==10) cout<<"Ordered"<<endl;
        else cout<<"Unordered"<<endl;
    }



    return 0;
}

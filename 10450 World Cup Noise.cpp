#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    vector<ull>vec;
    vec.push_back(1);
    vec.push_back(1);
    for(int i=2; i<=55; i++)
    {
        ull a=vec[i-1]+vec[i-2];
        vec.push_back(a);
        //cout<<a<<endl;
    }

    int t,k=1;
    cin>>t;
    while(t--)
    {
        ull n;
        cin>>n;
           cout<<"Scenario #"<<k<<":"<<endl;
           cout<<vec[n+1]<<endl;
           cout<<endl;
           k++;
    }


    return 0;
}

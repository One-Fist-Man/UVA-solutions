#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    vector<ull>vec;
    vec.push_back(1);
    vec.push_back(1);
    for(int i=2; i<=50; i++)
    {
        ull a=vec[i-1]+vec[i-2];
        vec.push_back(a);
        //cout<<a<<endl;
    }

    ull n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        cout<<vec[n]<<endl;
    }

    return 0;
}

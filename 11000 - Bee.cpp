#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{

    vector<ll>vec,vec2;
    vec.push_back(0);
    vec.push_back(1);
    vec2.push_back(0);
    vec2.push_back(1);
    ll sum=0,sum2=1;
    for(int i=2; i<=50; i++)
    {
        sum=vec[i-2]+vec[i-1];
        vec.push_back(sum);
        sum2+=sum;
        // cout<<sum2<<endl;
        vec2.push_back(sum2);
    }
    // for(int i=0;i<vec2.size();i++) cout<<vec2[i]<<" ";
    ll n;
    while(cin>>n)
    {
        if(n==-1) return 0;
        cout<<vec2[n]<<" "<<vec2[n+1]<<endl;
    }


    return 0;
}

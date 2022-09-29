#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define k 20000000
seive()
{

}
int main( )
{
    vector<int>vec;
    vec.push_back(1);
    for(int i=2;i<=k;i++)
    {
        if(i%2==0&&i%3==0&&i%5==0||i%7==0)
            vec.push_back(i);
    }
    ll n;
    //for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
    while(cin>>n)
    {
        cout<<vec[n-1]<<endl;
    }

    return 0;
}

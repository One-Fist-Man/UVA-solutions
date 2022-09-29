#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>vec;
ll counti;
void parity(ll n)
{
    if(n>0)
    {
        int a=n%2;

        if(a==1)
            counti++;
        parity(n/2);

        vec.push_back(a);
    }
}
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0) return 0;
        parity(n);

        cout<<"The parity of ";
        for(ll i=0; i<vec.size(); i++)
                cout<<vec[i];
                cout<<" is "<<counti <<" (mod 2)."<<endl;


        vec.clear();
        counti=0;
    }
    return 0;
}

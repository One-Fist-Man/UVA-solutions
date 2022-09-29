#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        vector<int>vec;
        while(n!=0)
        {
            int a=n%2;
            vec.push_back(a);
            n/=2;
        }
        // for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
        //cout<<endl;
        int a=0,b=0,counti=0;
        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i]==1&&counti%2==0)
            {
                a+=pow(2,i);
                counti++;
            }
            else if(vec[i]==1&&counti%2==1)
            {
                b+=pow(2,i);
                counti++;
            }

        }

        cout<<a<<" "<<b<<endl;

    }

    return 0;
}

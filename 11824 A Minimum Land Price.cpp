#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        double a;
        vector<double>vec;
        while(cin>>a)
        {
            if(a==0)
                break;
            vec.push_back(a);
        }

        sort(vec.begin(),vec.end(),greater<double>());
        double sum=0;
        for(int i=1; i<=vec.size(); i++)
        {
            sum+=(2*pow(vec[i-1],i));
           // cout<<sum<<endl;
           //cout<<(2*pow(vec[i-1],i))<<endl;
        }
        if(sum>5000000)
            cout<<"Too expensive"<<endl;
        else
            cout<<sum<<endl;

    }
    return 0;
}

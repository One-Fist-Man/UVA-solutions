#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    map<string,int>mp;
    ll t,k=0;
    cin>>t;
    cin.ignore();
    cin.ignore();
    while(t--)
    {
        if(k==1) cout<<endl;
        k=1;
        string s;
        double n=0;
        while(getline(cin,s))
        {
            if(s=="") break;
            n++;
            mp[s]++;
        }
       // cout<<n<<endl;
        n=100.0/n;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            double a;
            a=it->second*n;
            cout<<it->first<<" ";
            cout<<fixed<<setprecision(4)<<a<<endl;
        }
        mp.clear();

    }

    return 0;
}

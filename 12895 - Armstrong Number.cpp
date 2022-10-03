#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int siz=s.size(),sum=0;
        for(int i=0; i<siz; i++)
        {
            int a=s[i]-'0';
            double b=pow(a,siz);
            sum+=b;
            // cout<<b<<endl;
        }
        stringstream ss;
        string p;
        ss<<sum;
        ss>>p;
        if(p==s)
            cout<<"Armstrong"<<endl;
        else
            cout<<"Not Armstrong"<<endl;
    }

    return 0;
}

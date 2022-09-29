#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<string>vec;
        string a,b;
        ll n,m;
        cin>>a>>b>>n>>m;
        vec.push_back(a);
        vec.push_back(b);
        for(ll i=2; i<=n; i++)
        {
            ll c=vec[i-1].size(),d=vec[i-2].size();
            ll maxi=max(c,d);
            string s1=vec[i-1],s2=vec[i-2];
            reverse(s1.begin(),s1.end());
            reverse(s2.begin(),s2.end());
            string s="";
            ll sum=0,car=0;
            for(ll j=0; j<maxi; j++)
            {

                if(j>=c)
                {

                    sum=s2[j]-'0';
                    sum+=car;
                    car=sum/10;
                    sum=sum%10;
                    s+=sum+'0';
                }
                else  if(j>=d)
                {

                    sum=s1[j]-'0';
                    sum+=car;
                    car=sum/10;
                    sum=sum%10;
                    s+=sum+'0';
                }
                else
                {

                    sum=(s2[j]-'0')+(s1[j]-'0');
                    sum+=car;
                    car=sum/10;
                    sum=sum%10;
                    s+=sum+'0';
                }
            }
            if(car!=0)
                s+=car+'0';
            reverse(s.begin(),s.end());
            vec.push_back(s);
//       cout<<s<<endl;
        }
//        for(ll i=0; i<vec.size(); i++)
//            cout<<vec[i]<<" ";
//        cout<<endl;
        string p="";
        //cout<<vec[n]<<endl;
        ll k=vec[n].size()-1;
        for(ll i=k; i>k-m; i--)
        {
            if(i>=0)
            {
                if(i==k)
                    p+=vec[n][i];
                else if(vec[n][i]>'0')
                    p+=vec[n][i];
            }
           // cout<<p<<endl;

        }
        reverse(p.begin(),p.end());
        cout<<p<<endl;


    }


    return 0;
}

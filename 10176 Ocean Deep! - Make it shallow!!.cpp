#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//ll bigmod(ll a,ll b,ll m)
//{
//    if(b==0) return 1%m;
//    if(b%2==0)
//    {
//        ll x=bigmod(a,b/2,m);
//        return  (x*x)%m;
//    }
//    else
//    {
//        ll x=bigmod(a,b-1,m);
//        return (x*a)%m;
//    }
//}
ll  bigmods(ll  b,ll  p,ll  m)
{
    if(p==0) return 1%m;

    else if(p%2==0)
    {
        ll y= bigmods(b,p/2,m);

        return (y*y)%m;
    }
    else return (b*(bigmods(b,p-1,m)))%m;
}
int main()
{
    // int a=bigmod(2,5,m);
    ofstream fil;
    fil.open("my.txt");

    char c;
    string s="";
    while(cin>>c)
    {
        while(c!='#')
        {
            s+=c;
            cin>>c;
        }
        //fil<<s<<endl;
        ll sum=0;
        int val=s.size()-1;
        //fil<<val<<endl;
        for(int i=0; i<s.size()-1; i++)
        {

            if(s[i]=='1')
            {
                //fil<<s[i]<<endl;

                ll a=bigmods(2,val,131071)%131071;
                //fil<<a<<endl;
                sum+=a;
            }
            val--;
        }
        //fil<<sum<<endl;
        if(sum%131071==0) fil<<"YES"<<endl;
        else fil<<"NO"<<endl;
        s="";
    }

    return 0;
}

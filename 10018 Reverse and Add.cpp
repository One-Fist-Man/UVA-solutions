#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll counti=0;
        string s,s2;
        cin>>s;
        int flag=0;
        while(flag==0)
        {
            s2=s;
            reverse(s2.begin(),s2.end());
            ll a,b,sum;
            stringstream ss;
            ss<<s;
            ss>>a;
//            cout<<a<<" ";
            stringstream sss;
            sss<<s2;
            sss>>b;
//            cout<<b<<endl;

            sum=a+b;
//            cout<<sum<<endl;
            stringstream ss2;
            ss2<<sum;
            string p;
            ss2>>p;
//            cout<<p<<endl;
            int len=p.size()-1;
            for(int i=0; i<p.size()/2; i++,len--)
            {
                if(p[i]!=p[len])
                {
                    flag=1;
                    break;
                }

            }
               counti++;
            if(flag==0)
            {
                cout<<counti<<" "<<p<<endl;
                break;
            }


            s=p;

            flag=0;

        }


    }




    return 0;
}

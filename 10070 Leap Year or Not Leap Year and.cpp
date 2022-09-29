#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,p=0;
    while(cin>>a)
    {
        if(p==1) cout<<endl;
        p=1;
        ll flag=0;
        if(a%100==0&&a%400==0)
        {
            cout<<"This is leap year."<<endl;
            flag=1;
        }
        else if(a%100>0&&a%4==0)
        {
            cout<<"This is leap year."<<endl;
            flag=1;
        }
       if(a%15==0&&a%55==0)
        {
            if(flag==0)
            {
                cout<<"This is leap year."<<endl;
                cout<<"This is huluculu festival year."<<endl;
                cout<<"This is bulukulu festival year."<<endl;
            }
            else
            {
                cout<<"This is huluculu festival year."<<endl;
                cout<<"This is bulukulu festival year."<<endl;
            }
        }
        else if(a%15==0)
            cout<<"This is huluculu festival year."<<endl;
        else if(a%55==0)
        {
            if(flag==0)
            {
                cout<<"This is leap year."<<endl;
                cout<<"This is bulukulu festival year."<<endl;
            }
            else
                cout<<"This is bulukulu festival year."<<endl;
        }
        else if(a%15!=0&&a%55!=0&&flag==0)
            cout<<"This is an ordinary year."<<endl;

    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,k=1;
    cin>>t;
    while(t--)
    {
        ll counti=0;
        string s1,s2;
        ll d1,d2,y1,y2;
        char a,b;
        cin>>s1>>d1>>a>>y1;
        cin>>s2>>d2>>b>>y2;

        ll month1=0,month2=0;
        if(s1=="January") month1=1;
        else if(s1=="February") month1=2;
        else if(s1=="March") month1=3;
        else if(s1=="April") month1=4;
        else if(s1=="May") month1=5;
        else if(s1=="June") month1=6;
        else if(s1=="July") month1=7;
        else if(s1=="August") month1=8;
        else if(s1=="September") month1=9;
        else if(s1=="October") month1=10;
        else if(s1=="November") month1=11;
        else if(s1=="December") month1=12;

        if(s2=="January") month2=1;
        else if(s2=="February") month2=2;
        else if(s2=="March") month2=3;
        else if(s2=="April") month2=4;
        else if(s2=="May") month2=5;
        else if(s2=="June") month2=6;
        else if(s2=="July") month2=7;
        else if(s2=="August") month2=8;
        else if(s2=="September") month2=9;
        else if(s2=="October") month2=10;
        else if(s2=="November") month2=11;
        else if(s2=="December") month2=12;

        if(month1>2) y1++;
        if(month2<2||month2==2&&d2<29) y2--;
        int flag=0;

//        cout<<y1<<" "<<y2<<endl;
//
//        cout<<y2-y1<<endl;

            while(y1%100!=0&&y1<y2)
            {
                if(y1%100!=0&&y1%4==0)
                {
                     counti++;
                }
                y1++;
            }

          //  cout<<"y1 "<<y1<<endl;

        for(ll i=y1;i<y2;)
        {
            //cout<<i<<endl;
            if(i%100==0&&i%400==0&&i+100<y2)
            {
                counti+=25;
                i+=100;
            }
            else if(i%100==0&&i+100<y2)
            {

                 counti+=24;
                 i+=100;
            }
            if(i%100==0&&i%400==0)
            {
                counti++;
                i++;
            }
            else if(i%100!=0&&i%4==0)
            {
                counti++;
                i++;
            }
            else i++;


        }
       // cout<<" y2 "<<y2<<endl;
         if(y2%100==0&&y2%400==0)
            {
                counti++;
            }
            else if(y2%100>0&&y2%4==0)
            {
                counti++;
            }
//        ll ans=y2-y1;
//        ll p=ans/100;
//        ll g=ans/400;
//        cout<<ans<<endl;
//
//        cout<<"100 "<<p<<endl;
//         ans/=4;
//         cout<<"400 "<<g<<endl;
//        ans=ans-p;
//        ans+=g;
//        cout<<ans<<endl;
//       counti+=ans;

        cout<<"Case "<<k<<": "<<counti<<endl;
        k++;

    }
    return 0;
}

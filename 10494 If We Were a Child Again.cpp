#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //fstream fil;
    //fil.open("example.txt");
     string s="";
        ll n=0;
        char c;
    while(cin>>s>>c>>n)
    {

//        int counti=-1;
//        for(ll i=0; i<all.size(); i++)
//        {
//            if(counti==-1&&all[i]==32)
//            {
//                if(all[i+1]!=32)
//                    counti=0;
//            }
//            else if(counti==-1&&all[i]!=32)
//            {
//                s+=all[i];
//                counti=0;
//            }
//          else if(counti==0&&all[i]!=32)
//            {
//                s+=all[i];
//            }
//            else if(counti==0&&all[i]==32)
//            {
//                if(all[i+1]!=32)
//                    counti=1;
//            }
//            else if(counti==1&&all[i]!=32)
//            {
//                c=all[i];
//            }
//            else if(counti==1&&all[i]==32)
//            {
//                if(all[i+1]!=32)
//                    counti=2;
//            }
//            else if(counti==2&&all[i]!=32)
//            {
//                n=(n*10)+all[i]-'0';
//            }
//            else if(counti==2&&all[i]==32)
//            {
//                if(all[i+1]!=32)
//                    counti=3;
//            }
//
//        }
        //cout<<s<<" "<<c<<" "<<n<<endl;
        ll rem=0,sum=0,ans=0,flag=0;
        string div="";
        for(ll i=0; i<s.size(); i++)
        {
            sum=(sum*10)+(s[i]-'0');
            ans=sum/n;
            if(ans==0&&flag==0)
            {
                if(i+1==s.size())
                    div+=ans+'0';
            }
            else
            {
                div+=ans+'0';
                flag=1;
            }

            sum=sum%n;

        }
        if(c=='/')
            cout<<div<<endl;
        else
            cout<<sum<<endl;
    }


    //cout<<sum<<" "<<div<<endl;

    return 0;
}

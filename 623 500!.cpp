//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//string add(string mul,string s)
//{
//    reverse(mul.begin(),mul.end());
//    reverse(s.begin(),s.end());
//    int a=mul.size(),b=s.size(),maxi=max(a,b),sum=0,carry=0;
//    string all="";
//
//    for(int i=0; i<maxi; i++)
//    {
//        if(i>=a)
//        {
//            sum=s[i]-'0';
//            sum+=carry;
//            carry=sum/10;
//            sum%=10;
//        }
//        else if(i>=b)
//        {
//            sum=mul[i]-'0';
//            sum+=carry;
//            carry=sum/10;
//            sum%=10;
//        }
//        else
//        {
//            sum=(s[i]-'0')+(mul[i]-'0');
//            sum+=carry;
//            carry=sum/10;
//            sum%=10;
//        }
//        all+=sum+'0';
//    }
//    if(carry!=0)
//        all+=carry+'0';
//    reverse(all.begin(),all.end());
//    //cout<<"add "<<all<<endl;
//
//    return all;
//}
//
//string multi(string mul,string s)
//{
//    reverse(mul.begin(),mul.end());
//    reverse(s.begin(),s.end());
//    string all="",val="";
//   // cout<<"mul "<<mul<<" "<<"val "<<s<<endl;
//
//    int a=mul.size(),b=s.size(),sum=0,carry=0,maxi=max(a,b),mini=min(a,b);
//    if(a>b)
//        swap(mul,s);
//    for(int i=0; i<mini; i++)
//    {
//        val="",carry=0;
//        for(int j=0; j<maxi; j++)
//        {
//           // cout<<s[j]<<" "<<mul[i] <<endl;
//            sum=(mul[i]-'0')*(s[j]-'0');
//            sum+=carry;
//            carry=sum/10;
//            sum%=10;
//            val+=sum+'0';
//           // cout<<" val " <<val<<endl;
//
//        }
//
//        if(carry!=0)
//            val+=carry+'0';
//        //cout<<" final val "<<val<<endl;
//        reverse(val.begin(),val.end());
//        for(int k=i; k>0; k--)
//            val+='0';
//        //cout<<"final 2nd val "<<val<<endl;
//        all=add(all,val);
//    }
//   // cout<<all<<endl;
//    return all;
//
//
//}
//
//int main()
//{
////    string s,s2,all="";
////    cin>>s>>s2;
////    multi(s,s2);
//    int n;
//    while(cin>>n)
//    {
//        string all="1";
//
//        for(int i=n; i>=1; i--)
//        {
//            stringstream ss;
//            string s1;
//            ss<<i;
//            ss>>s1;
//            all=multi(all,s1);
//        }
//        cout<<n<<"!"<<endl;
//        cout<<all<<endl;
//    }
//
//    return 0;
//}

///eficiant and accepted code

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<int>vec;
        vec.push_back(1);

        for(int i=1; i<=n; i++)
        {
            int a=vec.size(),carry=0;
            for(int j=0; j<a; j++)
            {
                int sum=vec[j]*i;
                sum+=carry;
                carry=sum/10;
                sum%=10;
                vec[j]=sum;
                //cout<<vec[j]<<endl;
            }
            while(carry>0)
            {
                int a=carry%10;
                vec.push_back(a);
                carry/=10;
            }
        }
        cout<<n<<"!"<<endl;
        for(int i=vec.size()-1; i>=0; i--)
            cout<<vec[i];
        cout<<endl;
    }

    return 0;
}

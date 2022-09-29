#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int t,l=1;
   cin>>t;
   cin.ignore(100,'\n');
   while(t--)
   {
       char arr[100000];
       gets(arr);
      // cout<<arr<<endl;
       int len=strlen(arr);
       string s="";
       for(int i=0;i<len;i++)
       {
           if(arr[i]>=97&&arr[i]<=122)
           s+=arr[i];
       }

       int flag=0,siz=s.size()-1;
       for(int i=0;i<s.size()/2;i++)
       {
           if(s[i]!=s[siz])
           {
               flag=1;
               break;
           }
           siz--;

       }
       cout<<"Case #"<<l<<":"<<endl;
       l++;
       if(flag==1) cout<<"No magic :("<<endl;
       else
       {
           int q=sqrt(s.size());
           if(q*q==s.size()) cout<<q<<endl;
           else cout<<"No magic :("<<endl;
       }

   }


    return 0;
}

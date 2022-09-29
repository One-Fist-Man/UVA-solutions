#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
    while(cin>>s)
    {
        if(s=="0") return 0;

      while(s.size()>1)
      {
          int sum=0;
          for(int i=0;i<s.size();i++)
          {
              sum+=s[i]-'0';
          }
          stringstream ss;
          ss<<sum;
          ss>>s;
      }
      cout<<s<<endl;
    }

    return 0;
}

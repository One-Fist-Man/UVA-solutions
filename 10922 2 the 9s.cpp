
#include<bits/stdc++.h>
#define ll  unsigned long long
using namespace std;

int main()
{
  //  ofstream fil;
    //fil.open("my.txt");
    string s;
    while(cin>>s)
    {
        if(s=="0") return 0;
        ll n=0,flag=0;
        for(int i=0; i<s.size(); i++)
        {
            n+=s[i]-'0';
        }
       // cout<<n<<endl;

        if(n%9!=0)  cout<<s<<" is not a multiple of 9."<<endl;
        else
        {
            int counti=1;
            while(n!=9&&n>9)
            {
                stringstream ss;
                string p;
                ss<<n;
                ss>>p;
                n=0;
                for(int i=0;i<p.size();i++)
                {
                    n+=p[i]-'0';
                }
                //cout<<n<<endl;
                counti++;
            }
           cout<<s<<" is a multiple of 9 and has 9-degree "<<counti<<"."<<endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ff                first
#define ss                second
#define pii               pair<int,int>
#define mk                make_pair
#define ll                long long
#define ull               unsigned long long
#define pb                push_back
#define fast_in_out       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define pi acos(-1.0)
#define inf (1<<29)
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define all(a) a.begin(),a.end()
#define eps 1e-9
#define MX 1000002
int main()
{
    fast_in_out;
  string s;
  vector<string>vec;
  getline(cin,s);
  cin.ignore();
  while(getline(cin,s))
  {
     if(s[0]=='_')
     {
       break;
     }
     vec.push_back(s);
  }

  string all="";
  for(int i=0;i<vec.size();i++)
  {
     int pw=0,sum=0;
     for(int j=vec[i].size()-1;j>=0;j--)
     {
        if(vec[i][j]=='o')
        { // cout<<pow(2,pw)<<endl;
            sum+=pow(2,pw);
            pw++;
        }
        else if(vec[i][j]==32)
        {
            pw++;
        }
     }
    // coutendl;
     char a=sum;
     if(a==13||a==10) cout<<endl;
     else
     cout<<a;
    // cout<<(char) a<<" "<<sum<<endl;
     //all+=a;
  }
 // cout<<all<<endl;

    return 0;
}

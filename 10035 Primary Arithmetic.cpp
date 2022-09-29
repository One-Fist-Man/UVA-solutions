#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll counti;
ll c=0;
void arith(ll x, ll y)
{
    if(x==0&&y==0) return;


        ll a=x%10;
        ll b=y%10;

        c=c+a+b;
        //cout<<c<<endl;
        c=c/10;
        if(c!=0)
            counti++;
        arith(x/10,y/10);

}
int main()
{

    ofstream myfile;
  myfile.open ("example.txt");
  //myfile << "Writing this to a file.\n";

    ll a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0) return 0;
        arith(a,b);
        if(counti==0) myfile << "No carry operation.\n"; //cout<<"No carry operation."<<endl;
        else myfile <<counti<<" carry operations."<<endl; //cout<<counti<<" carry operations."<<endl;
        counti=0;
    }
      myfile.close();

    return 0;
}

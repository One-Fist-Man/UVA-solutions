#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    cin.ignore();

    while(n--)
    {
        string a,b;
        getline(cin,a);
        getline(cin,b);
//        cout<<a<<endl;
//        cout<<b<<endl;


        if(a.size()==b.size())
        {
            int flag=0;
            for(int i=0; i<a.size(); i++)
            {
                if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')&&(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'));
                else if(a[i]!=b[i])
                    flag=1;

//                 cout<<a[i]<<endl;
//                 cout<<b[i]<<endl;
            }
            if(flag==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}

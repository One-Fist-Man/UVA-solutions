#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,k=1;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        if(k>1) cout<<endl;
        cin.ignore();
        cout<<"Case "<<k<<":"<<endl;
        k++;
        while(n--)
        {
            string s;
            getline(cin,s);
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]==' '&&s[i+1]==' ');

                else
                    cout<<s[i];
            }
            cout<<endl;
        }
    }
    return 0;
}

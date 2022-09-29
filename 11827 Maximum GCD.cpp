#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main( )
{
    ll n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        vector<int>vec;
        string s,s2="";
        getline(cin,s);
//
//       while(s.length()==0)
//       {
//           getline(cin,s);
//       }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==32&&s[i+1]!=32)
            {
                stringstream ss;
                ss<<s2;
                int b;
                ss>>b;
                vec.push_back(b);
                s2="";
            }
            else if(s[i]!=32)
                s2+=s[i];
        }
        if(s2!="")
        {
            stringstream ss;
            ss<<s2;
            int b;
            ss>>b;
            vec.push_back(b);
            s2="";
        }


        //for(int i=0; i<vec.size(); i++)
        //    cout<<vec[i]<<" ";

        int maxi=0;
        for(int i=0; i<vec.size()-1; i++)
        {
            for(int j=i+1; j<vec.size(); j++)
            {
                int a=__gcd(vec[i],vec[j]);
                if(maxi<a)
                    maxi=a;
                //cout<<maxi<<endl;
            }
        }
        cout<<maxi<<endl;

    }

    return 0;
}

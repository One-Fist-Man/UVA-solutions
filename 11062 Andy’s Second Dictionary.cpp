#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    vector<string>vec;
    set<string>st;

    string s;
    while(cin>>s)
    {
       // cout<<s<<endl;
        //cout<<s.size()<<endl;
        vec.push_back(s);
    }
    string s2="";
    for(ll i=0;i<vec.size();i++)
    {
        for(ll j=0;j<vec[i].size();j++)
        {
            if(vec[i][j]=='-'||(vec[i][j]>=97&&vec[i][j]<=122))
            {
                s2+=vec[i][j];
            }
            else if(vec[i][j]>=65&&vec[i][j]<=90)
            {
                s2+=vec[i][j]+32;
            }
        }
       // cout<<s2<<endl;
        ll l=s2.size()-1;
        if(s2[l]=='-')
        {
            s2.erase(l,1);
        }
        else
        {
            st.insert(s2);
            s2="";
        }
    }

    for(auto it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}


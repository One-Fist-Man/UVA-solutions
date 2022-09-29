#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    vector<string>vec;
    int maxi=0;
    while(getline(cin,s))
    {
        vec.push_back(s);
        if(s.size()>maxi) maxi=s.size();
    }

    for(int i=0;i<maxi;i++)
    {
        string sum="";
        for(int j=vec.size()-1;j>=0;j--)
        {
            if(i<vec[j].size())
            sum+=vec[j][i];
            else sum+=' ';
        }
        cout<<sum<<endl;
    }
    return 0;
}

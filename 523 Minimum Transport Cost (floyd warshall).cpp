#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
vector<vector<int> > vec(10000);
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;

    ll j=0;
    while(getline(cin,s))
    {
        string g="";
        for(int i=0;i<=s.size();i++)
        {
            if(s[i]==32||i==s.size())
            {
                stringstream ss;
                ss<<g;
                int a;
                ss>>a;
                vec[j].push_back(a);
                g="";
            }
            else g+=s[i];
        }
    }
    ll len=vec[0].size();
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {

        }
    }


    return 0;
}

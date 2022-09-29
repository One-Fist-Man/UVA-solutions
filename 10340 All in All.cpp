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

int main()
{
    fast_in_out;
    string s,s2;
    while(cin>>s>>s2)
    {
        ll flag=0;
        for(int i=0,j=0; i<s2.size(); i++)
        {
            if(j<s.size())
            {
                if(s2[i]==s[j])
                    j++;
            }
            if(j==s.size())
            {
                flag=1;
                break;
            }

        }
        if(flag==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

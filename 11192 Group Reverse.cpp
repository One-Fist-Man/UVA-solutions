#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int g;
    string s;
    while(cin>>g)
    {
        if(g==0) return 0;
        cin>>s;
        int len=s.size()/g;
        int low=0,high=0;
        while(s.size()>high)
        {
            low=high;
            high+=len;
            reverse(s.begin()+low,s.begin()+high);
            for(int i=low; i<high; i++)
                cout<<s[i];
        }
        cout<<endl;
    }


    return 0;
}


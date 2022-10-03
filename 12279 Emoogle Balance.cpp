#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=1;
    while(cin>>n)
    {
        if(n==0) return 0;
        int a=0,b=0;
        for(int i=0; i<n; i++)
        {
            int c;
            cin>>c;
            if(c!=0)
                a++;
            else
                b++;
        }
        cout<<"Case "<<p++<<": "<<a-b<<endl;
    }

    return 0;
}

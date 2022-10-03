#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string s[10];
        int arr[10],maxi=0;
        for(int j=0;j<10;j++)
        {
            cin>>s[j]>>arr[j];
            if(maxi<arr[j]) maxi=arr[j];

        }
        cout<<"Case #"<<i<<":"<<endl;
          for(int j=0;j<10;j++)
        {

            if(maxi==arr[j]) cout<<s[j]<<endl;

        }
    }
    return 0;
}

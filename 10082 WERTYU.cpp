#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    string arr;
    while(getline(cin,arr))
    {
        for(int i=0;i<arr.size();i++)
        {
            char c=arr[i];
            int a=s.find(c);
            if(arr[i]==32)
            cout<<arr[i];
            else cout<<s[a-1];
        }
        cout<<endl;
    }

    return 0;
}

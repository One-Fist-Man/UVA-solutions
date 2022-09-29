#include<bits/stdc++.h>
using namespace std;
int main()
{

    string arr;
    int t=0;
    while(cin>>arr)
    {
      //  if(t==1) cout<<endl;
       // t=1;

        int miror=0,pal=0;
        for(int i=0; i<arr.size(); i++)
        {
            int k=arr.size()-i-1;
            if(arr[i]=='3'&&arr[k]=='E' || arr[i]=='E'&&arr[k]=='3')
                miror=0;
            else if(arr[i]=='J'&&arr[k]=='L' || arr[i]=='L'&&arr[k]=='J')
                miror=0;
            else if(arr[i]=='S'&&arr[k]=='2' || arr[i]=='2'&&arr[k]=='S')
                miror=0;
            else if(arr[i]=='Z'&&arr[k]=='5' || arr[i]=='5'&&arr[k]=='Z')
                miror=0;
            else if(arr[i]=='A'||arr[i]=='H'||arr[i]=='I'||arr[i]=='O'||arr[i]=='M'||arr[i]=='U'||arr[i]=='T'||arr[i]=='V'||arr[i]=='W'||arr[i]=='X'||arr[i]=='Y'||arr[i]=='1'||arr[i]=='8')
                miror=0;
            else
            {
                miror=1;
                break;
            }
        }
        //cout<<miror<<endl;

        string s;
        s=arr;
        reverse(arr.begin(),arr.end());
        if(s!=arr)
            pal=1;
        //cout<<arr<<endl;

        if(miror==0&&pal==0)
            cout<<s<<" -- is a mirrored palindrome."<<endl;
        else if(miror==0)
            cout<<s<<" -- is a mirrored string."<<endl;
        else if(pal==0)
            cout<<s<<" -- is a regular palindrome."<<endl;
        else
            cout<<s<<" -- is not a palindrome."<<endl;

             cout<<endl;

    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
string s;
int palin(int i ,int j)
{
    int flag=1;
   while(i<j)
    {
        //cout<<s[i]<<" "<<s[j]<<endl;
        if(s[i]!=s[j])
        {
            flag=0;
            break;
        }
        i++,j--;
    }
    return flag;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        int flag=0,k=s.size()-1;

        flag=palin(0,k);
        for(int i=0; i<s.size()-1; i++)
        {
            int a=s.size();
//            for(int j=i+1; j<s.size(); j++)
//               b+=s[j];
//         b[0]=1;
//          cout<<b<<endl;
           // b.erase(b.begin()+0);
           // cout<<a<<" "<<b<<endl;

            if(palin(0,i)==1&&palin(i+1,k)==1)
            {
                flag=2;
                break;
            }

        }
        if(flag==0)
            cout<<"simple"<<endl;
        else if(flag==1)
            cout<<"palindrome"<<endl;
        else
            cout<<"alindrome"<<endl;
    }


    return 0;
}

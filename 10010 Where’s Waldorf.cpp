#include<bits/stdc++.h>
using namespace std;
int tbl[100000];
void kmptbl(string a)
{
    int j=0;
    for(int i=1; i<a.size(); i++)
    {
        while(j>0&&a[j]!=a[i])
            j=tbl[j-1];
        if(a[j]==a[i])
            j++;
        tbl[i]=j;
    }
}

int picone(string a,string b)
{

    int k=0;
    for(int j=a.size()-1; j>0; j--)
    {
        while(k>0&&a[j]!=b[k])
            k=tbl[k-1];

        if(a[j]==b[k])
        {
            k++;
        }
        if(k==b.size())
        {
            flag=1;
            return flag;
        }
    }
    return 0;
}
int upore(string a[],string b)
{
    int k=0;
    for(int j=a.size()-1; j>0; j--)
    {
        while(k>0&&a[j]!=b[k])
            k=tbl[k-1];

        if(a[j]==b[k])
        {
            k++;
        }
        if(k==b.size())
        {
            flag=1;
            return flag;
        }
    }
    return 0;
}
int shoja(string a,string b)
{
    int k=0;
    for(int j=0; j<a.size(); j++)
    {
        while(k>0&&a[j]!=b[k])
            k=tbl[k-1];

        if(a[j]==b[k])
        {
            k++;
        }
        if(k==b.size())
        {
            flag=1;
            return flag;
        }
    }
    return 0;
}


int main()
{
    string s;
    getline(cin,s);
    int m,n;
    cin>>m>>n;
    string s[m];
    int i=0;
    while(m--)
    {
        cin>>s[i++];
    }
    int a;
    cin>>a;
    string b;
    while(a--)
    {
        cin>>b;
        int flag=0;
        for(int i=0; i<s.size(); i++)
        {
            string a=s[i];
            kmptbl(b);
            flag=shoja(a,b);
            int k=0;

            if(flag==1)
                break;


//               if(a[j]==b[0])
//               {
//                   if(j+b.size()-1<s[i].size())
//                   {
//                       int flag=0;
//                       for(int k=0;k<b.size();k++)
//                       {
//                           if(s[j+k]!b[k])
//                       }
//                   }
        }
    }
}


return 0;
}

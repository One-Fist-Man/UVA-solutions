#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[1001];
    set<string>st;
    int i=0,siz=0;
    while(1)
    {
        cin>>s[i];
        siz=i;
        if(s[i]=="#") break;
        i++;
    }

    for(int i=0;i<siz;i++)
    {
        int flag=0;
        string a=s[i];
        transform(a.begin(),a.end(),a.begin(),::tolower);
        sort(a.begin(),a.end());
        //cout<<a<<endl;
        for(int j=0;j<siz;j++)
        {
            string b;
            if(i!=j)
            {
                b=s[j];
                transform(b.begin(),b.end(),b.begin(),::tolower);
                sort(b.begin(),b.end());
                //cout<<b<<endl;
            }
            if(a==b)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            st.insert(s[i]);
        }
    }

    for(auto it=st.begin();it!=st.end();it++)
        cout<<*it<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
char arr[32];
ll n,counti=0;
set<string>st;
void bt(int a)
{
    if(counti==n)
    {
        arr[n]='\0';
        sort(arr,arr+n);
        //cout<<arr<<endl;
        st.insert(arr);
        return ;
    }
    else
    {
        for(int i=a; i<s.size(); i++)
        {
            arr[counti]=s[i];
            counti++;
            bt(i+1);
            counti--;
        }
    }

}
int main()
{
    while(cin>>s>>n)
    {
        bt(0);
        set<string>::iterator it;
        for(it=st.begin(); it!=st.end(); it++)
            cout<<*it<<endl;
        counti=0;
        st.clear();
    }



    return 0;
}

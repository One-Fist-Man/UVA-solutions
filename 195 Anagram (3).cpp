#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
int visit[100000];
set<string>st;
string s,p;
void dfs(int j)
{
    if(j==s.size())
    {
        p[j]='\0';
        st.insert(p);
        return ;
    }
    for(int i=0; i<s.size(); i++)
    {
        if(visit[i]==0)
        {
            p[j]=s[i];
            visit[i]=1;
            dfs(j+1);
            visit[i]=0;
        }

    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        p=s;
        for(int i=0,j=0; i<s.size(); i++)
        {
            p[j]=s[i];
            visit[i]=1;
            dfs(j+1);
            visit[i]=0;
        }
        for(auto it=st.begin(); it!=st.end(); it++)
            cout<<*it<<endl;
           // memeset(visit,0);
            //memeset(p,'a');
            st.clear();
    }



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
map<char,vector<char> >mp;
map<char,ll>visit;
void bfs(char i)
{
    queue<char>q;
    q.push(i);
    visit[i]=1;
    while(q.empty()!=1)
    {
        char x=q.front();
        q.pop();
        for(ll i=0; i<mp[x].size(); i++)
        {
            char y=mp[x][i];
            if(visit[y]==0)
            {
                visit[y]=1;
                q.push(y);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n;
    cin>>n;
    while(n--)
    {

        char a;
        cin>>a;
        string b="";
        cin.ignore();
        while(getline(cin,b))
        {
            if(b=="")
                break;
            mp[b[0]].push_back(b[1]);
            mp[b[1]].push_back(b[0]);
        }
        ll counti=0;
        for(char i='A'; i<=a; i++)
        {
            visit[i]=0;
        }
        for(char i='A'; i<=a; i++)
        {
            if(visit[i]==0)
            {
                counti++;
                bfs(i);
            }
        }
        cout<<counti<<endl;
        if(n!=0) cout<<endl;
        mp.clear();
    }

    return 0;
}

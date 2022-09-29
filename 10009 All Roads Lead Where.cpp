#include<bits/stdc++.h>
using namespace std;
map<char,vector<char> >vec;
map<char,int>mp;
map<char,char>parent;

void bfs(char s,char e,map<char,vector<char> >vec)
{
    queue<char>q;
    q.push(s);
    mp[s]=1;
    parent[s]='0';
    while(q.empty()!=1)
    {
        char x=q.front();
        q.pop();
        if(x==e)
            break;
        for(int i=0; i<vec[x].size(); i++)
        {
            char y=vec[x][i];
            if(mp[y]!=1)
            {
                q.push(y);
                mp[y]=1;
                parent[y]=x;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        map<char,vector<char> >vec;
        cin>>m>>n;


        while(m--)
        {
            string a,b;
            cin>>a>>b;
            mp[a[0]]=0;
            mp[b[0]]=0;
            vec[a[0]].push_back(b[0]);
            vec[b[0]].push_back(a[0]);
        }
        /*
        7 3
        Rome Turin
        Turin Venice
        Turin Genoa
        Rome Pisa
        Pisa Florence
        Venice Athens
        Turin Milan
        Turin Pisa
        Milan Florence
        Athens Genoa
        */
        while(n--)
        {
            string a,b;
            cin>>a>>b;
            bfs(a[0],b[0],vec);
            char c=b[0];
            vector<char>v;
            v.push_back(c);
            while(parent[c]!='0')
            {
                v.push_back(parent[c]);
                c=parent[c];
            }

            for(int i=v.size()-1; i>=0; i--)
                cout<<v[i];
            cout<<endl;
            mp.clear();
            parent.clear();
        }
        if(t!=0) cout<<endl;
    }

    return 0;
}

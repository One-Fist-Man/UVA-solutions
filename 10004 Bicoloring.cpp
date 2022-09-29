#include <bits/stdc++.h>
using namespace std;
#define fast_in_out       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define pi acos(-1.0)
#define memeset(a) memset(a,0,sizeof(a))
int colour[205];
vector< vector<int> >vec(205);
void bfs(int a)
{
    colour[a]=1;
    queue<int>q;
    q.push(a);
    int flag=0;
    while(q.empty()!=1)
    {
        int x=q.front();
        q.pop();
        for(int i=0; i<vec[x].size(); i++)
        {
            int y=vec[x][i];
            //cout<<x<<" "<<y<<endl;
            if(colour[y]==colour[x])
            {
                flag=1;
                break;
            }
            if(colour[y]==0)
            {
                q.push(y);
                if(colour[x]==1)
                    colour[y]=2;
                else
                    colour[y]=1;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        cout<<"NOT BICOLORABLE."<<endl;
    else
        cout<<"BICOLORABLE."<<endl;
    memeset(colour);
}
int main()
{
//   ofstream cout;
//   fil.open("input.txt");
    fast_in_out;
    int n,m;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        cin>>m;
        while(m--)
        {
            int a,b;
            cin>>a>>b;
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
        bfs(0);
        for(int i=0; i<n; i++)
            vec[i].clear();
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memset(arr) memset(arr,0,sizeof arr);

int r,c;
int d_arry1[4]= {1,-1,0,0};
int d_arry2[4]= {0,0,1,-1};
int arry[1000][1000];
int visit[1000][1000];
int dis[1000][1000];
struct pir
{
    int a,b;
};

int bfs(pir start,pir ends)
{

    memset(visit);
    memset(dis);
    queue<pir>q;
    q.push(start);
    visit[start.a][start.b]=1;
    while(q.empty()!=1)
    {
        pir x=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int a=x.a+d_arry1[i];
            int b=x.b+d_arry2[i];
            if(a<r&&b<c&&a>-1&&b>-1&&arry[a][b]!=2&&visit[a][b]!=1)
            {
                pir y;
                y.a=a,y.b=b;
                q.push(y);
                visit[a][b]=1;
                dis[a][b]=dis[x.a][x.b]+1;
            }
            if(a==ends.a&&b==ends.b)
                return dis[a][b];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ofstream fil;
    fil.open("input.txt");
    while(cin>>r>>c)
    {
        if(r==0&&c==0) return 0;
        //int arry[r+1][c+1];
        memset(arry);
        int tr;
        cin>>tr;
        while(tr--)
        {
            int rb,cb;
            cin>>rb>>cb;
            while(cb--)
            {
                int a;
                cin>>a;
                arry[rb][a]=2;
            }
        }
        pir start,ends;
        cin>>start.a>>start.b;
        cin>>ends.a>>ends.b;

        int ans=bfs(start,ends);
        cout<<ans<<endl;
    }

    return 0;
}

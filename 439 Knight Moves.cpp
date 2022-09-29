#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memset(arr) memset(arr,0,sizeof arr);
int arr[9][9];
int visit[9][9];
int level[9][9];
int d_arr1[8]= {-2,-2,1,-1,1,-1,2,2};
int d_arr2[8]= {-1,1,-2,-2,2,2,-1,1};
struct pir
{
    int a,b;
};
int bfs(pir start,pir ends)
{
    memset(visit);
    memset(level);
    queue<pir>q;
    q.push(start);
    visit[start.a][start.b]=1;

    while(q.empty()!=1)
    {

        pir x=q.front();
        q.pop();
        for(int i=0; i<8; i++)
        {
            int a=x.a+d_arr1[i];
            int b=x.b+d_arr2[i];

            if(a>-1&&a<8&&b>-1&&b<8&&visit[a][b]!=1)
            {
                pir y;
                y.a=a,y.b=b;
                q.push(y);
                visit[a][b]=1;
                level[a][b]=level[x.a][x.b]+1;
                if(a==ends.a&&b==ends.b)
                {
                    return level[a][b];
                }

            }

        }
    }
    return level[ends.a][ends.b];
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string a,b;
    while(cin>>a>>b)
    {
        memset(arr);
        pir start,ends;
        start.a=a[0]-'a';
        start.b=a[1]-'1';
        ends.a=b[0]-'a';
        ends.b=b[1]-'1';
        //cout<<start.a<<" "<<start.b<<" "<<ends.a<<" "<<ends.b<<endl;
        int ans=0;
        //if(start.a==ends.a&&start.b==ends.b)
         //   ans=0;
        //else
            ans=bfs(start,ends);

        cout<<"To get from "<<a<<" to "<<b<<" takes "<<ans<<" knight moves."<<endl;

    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
//#define int long long
//#define memset(arr) memset(arr,0,sizeof arr);

int bfs(int start,int ends,int visit[],int dis[],vector< vector<int> >vec)
{
    queue<int>q;
    visit[start]=dis[start]=0;
    q.push(start);

    while(q.empty()!=1)
    {
        int x=q.front();
        q.pop();
        for(int i=0; i<vec[x].size(); i++)
        {
            int y=vec[x][i];
            if(visit[y]==0)
            {
                q.push(y);
                visit[y]=1;
                dis[y]=dis[x]+1;
            }
        }
    }
    return dis[ends];
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ofstream fil;
    fil.open("input.txt");
    int k=1,n;

    while(cin>>n)
    {
        vector< vector<int> >vec(22);
        for(int i=1,j=0; j<n; j++)
            {
                int a;
                cin>>a;
                vec[i].push_back(a);
                vec[a].push_back(i);
            }

        for(int i=2; i<=19; i++)
        {
            int n;
            cin>>n;
            for(int j=0; j<n; j++)
            {
                int a;
                cin>>a;
                vec[i].push_back(a);
                vec[a].push_back(i);
            }
        }
//     for(int i=1;i<=19;i++)
//    {
//        for(int j=0;j<vec[i].size();j++)
//        {cout<<vec[i][j]<<" ";
//        }
//        cout<<endl;
//    }
        cout<<"Test Set #"<<k<<endl;
        int q;
        cin>>q;
        while(q--)
        {
            int visit[22]= {0};
            int dis[22]= {0};
            int a,b;
            cin>>a>>b;
            int c=bfs(a,b,visit,dis,vec);
            cout<<setw(2)<<right<<a<<" to "<<setw(2)<<right<<b<<": "<<c<<endl;
        }
        for(int i=1; i<=20; i++)
            vec[i].clear();

        k++;
        cout<<endl;
    }


    return 0;
}

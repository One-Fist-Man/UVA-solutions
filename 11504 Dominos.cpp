#include <bits/stdc++.h>
using namespace std;
#define fast_in_out    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define pi acos(-1.0)
#define memeset(a) memset(a,0,sizeof(a))

int visit[100005];
vector<vector<int> >vec(100005);
vector< pair<int,int> >indeg;
int times;

bool sec(pair<int,int> a,pair<int,int> b)
{
    return (a.second > b.second);
}

void dfs(int a)
{
    times++;
    visit[a]=1;
    for(int i=0;i<vec[a].size();i++)
    {
        if(visit[vec[a][i]]==0)
            dfs(vec[a][i]);
    }
    times++;
    visit[a]=2;
    indeg.push_back(make_pair(a,times));
    return ;
}
int main()
{
//   ofstream cout;
//   fil.open("input.txt");
    fast_in_out;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

//        for(int i=1; i<=n; i++)
//        {
//            indeg.push_back(make_pair(i,0));
//        }
        for(int i=0; i<m; i++)
        {
            int x,y;
            cin>>x>>y;
            vec[x].push_back(y);
        }

        for(int i=1;i<=n;i++)
        {
            if(visit[i]==0)
            dfs(i);
        }
        memeset(visit);
//        cout<<endl;
//        sort(indeg.begin(),indeg.end());
//         for(int i=0;i<indeg.size();i++)
//        {
//            cout<<indeg[i].first<<" "<<indeg[i].second<<endl;
//        }
       // cout<<endl;
        sort(indeg.begin(),indeg.end(),sec);
//         for(int i=0;i<indeg.size();i++)
//        {
//            cout<<indeg[i].first<<" "<<indeg[i].second<<endl;
//        }
      //  cout<<endl;
        int counti=0;
        for(int i=0;i<n;i++)
        {
            if(visit[indeg[i].first]==0)
            {
                 counti++;
                // cout<<indeg[i].first<<endl;
            dfs(indeg[i].first);
            }
        }
//        for(int i=1;i<=n;i++) cout<<visit[i]<<" ";
//        cout<<endl;
        cout<<counti<<endl;
        memeset(visit);
        for(int i=1;i<=n;i++)
        {
            vec[i].clear();
        }
        indeg.clear();

    }



    return 0;
}

/*
15 19
1 2
2 1
2 3
3 4
4 5
5 9
9 7
7 5
8 9
7 8
7 6
6 10
10 12
12 11
11 6
15 14
14 15
14 13
13 4
*/


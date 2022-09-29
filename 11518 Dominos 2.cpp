#include <bits/stdc++.h>
using namespace std;
#define fast_in_out       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define pi acos(-1.0)
#define memeset(a) memset(a,0,sizeof(a))

vector< vector<int> >vec(10005);
int visit[10005];
void dfs(int a)
{
    visit[a]=1;
    for(int i=0;i<vec[a].size();i++)
    {
        if(!visit[vec[a][i]])
        {
            dfs(vec[a][i]);
        }

    }
    return ;
}
int main()
{
   //ofstream fil;
  // fil.open("input.txt");
    fast_in_out;
    int t;
    cin>>t;


    while(t--)
    {
          int n,m,l;
        cin>>n>>m>>l;
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            vec[x].push_back(y);
        }
        int counti=0;
        while(l--)
        {
            int a;
            cin>>a;
            dfs(a);
        }
         for(int i=1;i<=n;i++)
            {
                if(visit[i]==1) counti++;
            }
             cout<<counti<<endl;
            memeset(visit);

        for(int i=1;i<=n;i++) vec[i].clear();

    }


    return 0;
}

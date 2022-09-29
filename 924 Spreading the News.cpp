#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memset(arr) memset(arr,0,sizeof arr);
vector< vector<int> >vec(2505);
int visit[2505];
int bfs(int a)
{
    queue<int>q;
    q.push(a);
   // visit[a]=1;
   int maxi=vec[a].size();
   int val=a;
    while(q.empty()!=1)
    {
        int x=q.front();
        q.pop();
        int counti=0;
        for(int i=0;i<vec[x].size();i++)
        {
           if(visit[vec[x][i]]!=1)
           {
               visit[vec[x][i]]=1;
               counti++;
               q.push(vec[x][i]);
           }
        }
        if(counti>maxi)
        {
            maxi=counti;
            val=x;
        }

    }
    cout<<maxi<<" "<<val<<endl;

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n;
    cin>>n;

    for(int i=0;i<n;i++ )
    {
        int a;
        cin>>a;
        while(a--)
        {
            int b;
            cin>>b;
            vec[i].push_back(b);
            //vec[b].push_back(i);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        bfs(a);
    }


    return 0;
}

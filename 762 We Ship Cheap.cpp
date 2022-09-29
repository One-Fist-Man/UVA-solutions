#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memset(arr) memset(arr,0,sizeof arr);

int main()
{
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //ofstream cout;
   // cout.open("input.txt");
    ll n,k=0;
    while(cin>>n)
    {
        //if(k==1) cout<<endl;
        map<string,vector<string> > mp1;
        map<string,int>visit,level;
        map<string,string>ans;


        while(n--)
        {
            string a,b;
            cin>>a>>b;
            mp1[a].push_back(b);
            mp1[b].push_back(a);
            visit[a]=0;
            visit[b]=0;
            level[a]=0;
            level[b]=0;
        }
        string start,ends;
        cin>>start>>ends;
//    for(auto i=mp1.begin();i!=mp1.end();i++)
//    {
//        cout<<i->first<<"---> ";
//       for(int j=0;j<mp1[i->first].size();j++)
//        cout<<mp1[i->first][j]<<" ";
//       cout<<endl;
//    }
        queue<string> q;
        q.push(start);
        visit[start]=1;
        int flag=0;
        while(q.empty()!=1)
        {
            string x=q.front();
            q.pop();
            for(int i=0; i<mp1[x].size(); i++)
            {
                if(visit[mp1[x][i]]==0)
                {
                    ans[mp1[x][i]]=x;
                    visit[mp1[x][i]]=1;
                    q.push(mp1[x][i]);
                    level[mp1[x][i]]=level[x]+1;
                    if(mp1[x][i]==ends)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
                break;

        }
        vector<string>vec;
        if(k==1) cout<<endl;

        if(flag==0)
            cout<<"No route"<<endl;
        else
        {
            string a=ends;
            for(int i=0; i<level[ends]; i++)
            {
                vec.push_back(a);
                vec.push_back(ans[a]);
                a=ans[a];
            }
            for(int i=vec.size()-1; i>=0; i-=2)
            {
                cout<<vec[i]<<" "<<vec[i-1]<<endl;
            }
        }
        k=1;

    }


    return 0;
}
/*
6
jv kp
kp gh
kp gj
kp hh
hh ij
ij ll
*/

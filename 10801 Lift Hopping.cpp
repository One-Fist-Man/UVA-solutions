#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr) memset(arr,0,sizeof arr);
#define inf 100000000000000
vector< vector<int> > arr(105),cost(105);
ll weight[105];
ll ck[105];
ll parent[105];
struct node
{
    int a,b;
    bool operator < (node p) const
    {
        return b>p.b;
    }
};
void dijkstra(int k)
{
    for(int i=0; i<100; i++)
        weight[i]=inf;
    node x;
    x.a=0,x.b=0;
    weight[0]=0;
    priority_queue<node>q;
    q.push(x);
    while(q.empty()!=1)
    {
        x=q.top();
        q.pop();
        int a=x.a;
        for(int i=0; i<arr[a].size(); i++)
        {
            int y=arr[a][i];
            if(weight[y]>weight[a]+cost[a][i])
            {
                weight[y]=weight[a]+cost[a][i];
                x.a=y,x.b=weight[y];
                q.push(x);
                parent[y]=a;
            }
        }
    }


}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,k;
    cin>>n>>k;
    int t[6];
    for(int i=0; i<n; i++)
        cin>>t[i];
    cin.ignore();

    memset(ck,-1,sizeof ck);

    for(int i=0; i<n; i++)
    {
        // cout<<1<<endl;
        string s,a="";
        vector<int>vec;
        getline(cin,s);
        //if(s=="\n") continue;
        for(int j=0; j<=s.size(); j++)
        {
            if(s[j]==32||j==s.size())
            {
                stringstream ss;
                int b;
                ss<<a;
                ss>>b;
                //cout<<b<<endl;
                vec.push_back(b);
                a="";
            }
            else
                a+=s[j];
        }
        for(int j=0; j<vec.size()-1; j++)
        {
            // cout<<vec[j]<<" ";
            if(ck[vec[j]]==-1)
                ck[vec[j]]=i;
            if(ck[vec[j+1]]==-1)
                ck[vec[j+1]]=i;
            arr[vec[j]].push_back(vec[j+1]);
            arr[vec[j+1]].push_back(vec[j]);


            ll a=(vec[j+1]-vec[j])*t[i];
            // cout<<arr[vec[j]].size()<<" "<<arr[vec[j+1]].size()<<endl;
            // if(ck[vec[j]]!=ck[vec[j+1]]) a+=60;
           // cout<<a<<endl;
            cost[vec[j]].push_back(a);
            cost[vec[j+1]].push_back(a);
        }

    }
    dijkstra(k+1);
    ll a=k,counti=0,flag=0;
    set<int>st;
    while(weight[a]!=0)
    {
        cout<<a<<" ";
        if(weight[a]==inf)
        {
            flag=1;
            break;
        }


        a= parent[a];
    }

    cout<<weight[k]+counti;


    return 0;
}

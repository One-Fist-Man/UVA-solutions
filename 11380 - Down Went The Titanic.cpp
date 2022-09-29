#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memeset(arr,a) memset(arr,a,sizeof arr);
#define inf 1000000000000000
char arr[35][35];
ll val[35][35];
ll visit[35][35];
ll t[4]= {1,-1,0,0};
ll u[4]= {0,0,1,-1};
ll path1[35][35],path2[35][35];
char test[7][8];
struct node
{
    ll a,b;
    node(ll c,ll d)
    {
        a=c;
        b=d;
    }
};
struct nodee
{
    ll a,b;
    char c;
    nodee(ll d,ll e,char f)
    {
        a=d;
        b=e;
        c=f;
    }
};

//node path[35][35];
node bfs(ll i,ll j,ll x,ll y)
{
    memeset(visit,0);
    //memeset(path1,-1);
    //memeset(path2,-1);

    queue<node>q;
    q.push(node(i,j));
    visit[i][j]=1;
    //path[i][j]=node(-1,-1);
    path1[i][j]=-1;
    path2[i][j]=-1;
    while(q.empty()!=1)
    {
        node g=q.front();
        q.pop();
        vector<nodee>srt;
        for(ll i=0; i<4; i++)
        {
            ll m=g.a+t[i];
            ll n=g.b+u[i];
            if(m>-1&&m<x&&n>-1&&n<y&&!visit[m][n])
            {
                if(arr[m][n]=='.'||arr[m][n]=='@'||arr[m][n]=='*'||arr[m][n]=='#')
                {
                    // cout<<m<<" "<<n<<endl;
                     q.push(node(m,n));
                   // srt.push_back(nodee(m,n,arr[m][n]));
                    path1[m][n]=g.a;
                    path2[m][n]=g.b;
                    //path[m][n]=node(g.a,g.b);
                    //cout<<g.a<<" "<<g.b<<endl;
                    visit[m][n]=1;
                    if(arr[m][n]=='*')
                        return node(m,n);
                }
            }

        }
//        for(int i=0;i<srt.size();i++)
//        {
//            cout<<srt[i].a<<" "<<srt[i].b<<" "<<srt[i].c<<endl;
//        }

//        for(int i=0; i<srt.size(); i++)
//        {
//            for(int j=i+1; j<srt.size(); j++)
//            {
//                nodee c=srt[i];
//                nodee d=srt[j];
//
//                if((c.c=='.'||c.c=='@')&&(d.c=='#'))
//                {
//                    nodee e=srt[i];
//                    srt[i]=srt[j];
//                    srt[j]=e;
//                }
//                else if(c.c=='.'&&d.c=='@')
//                {
//                    nodee e=srt[i];
//                    srt[i]=srt[j];
//                    srt[j]=e;
//                }
//            }
//        }
//        cout<<endl<<endl;
//
//        for(int i=0;i<srt.size();i++)
//        {
//            cout<<srt[i].a<<" "<<srt[i].b<<" "<<srt[i].c<<endl;
//        }
//        cout<<endl;
        for(int i=0; i<srt.size(); i++)
        {
            q.push(node(srt[i].a,srt[i].b));
        }

    }
    return node(-1,-1);
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    ofstream fil;
    fil.open("input.txt");
    ll x,y,p,u=1;
    while(cout<<u++<<endl,cin>>
            x>>y>>p)
    {
        for(ll i=0; i<x; i++)
        {
            for(ll j=0; j<y; j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='#')
                    val[i][j]=p;
            }
        }
        memeset(test,'.');

        ll counti=0;
        for(ll i=0; i<x; i++)
        {
            for(ll j=0; j<y; j++)
            {
                if(arr[i][j]=='#')
                {
                    ll m=p;
                    while(m--)
                    {

                        node a=bfs(i,j,x,y);
                        if(a.a!=-1&&a.b!=-1)
                        {
                            while(1)
                            {
                                if(a.a==-1&&a.b==-1)
                                    break;
                                //cout<<arr[a.a][a.b]<<endl;
                                if(arr[a.a][a.b]=='.')
                                {
                                    arr[a.a][a.b]='~';
                                }
                                else if(arr[a.a][a.b]=='*')
                                {
                                    if(val[i][j]>0)
                                    {
                                        val[i][j]=val[i][j]-1;
                                        counti++;
                                        arr[a.a][a.b]='~';
                                        test[i][j]='1';
                                    }

                                }
                                // else if(arr[a.a][a.b]=='*')
                                ll q,w;
                                q=a.a;
                                w=a.b;
                                a.a=path1[q][w];
                                a.b=path2[q][w];
                                //cout<<a.a<<" "<<a.b<<endl;
                                //cout<<11<<endl;
                            }
                        }
                        //arr[i][j]='~';

                        for(int r=0; r<x; r++)
                        {
                            for(int l=0; l<y; l++)
                            {
                                cout<<arr[r][l];
                            }
                            cout<<endl;
                        }
                        cout<<endl;
                    }
                }
            }
        }
        fil<<counti<<endl;
        memeset(visit,0);
        memeset(arr,0);
        memeset(path1,0);
        memeset(path2,0);
        memeset(val,0);

    }


    return 0;
}
/*
3 4 1
*@##
*@~#
*@~~

13 3 1
.*@
#.#
.##
#.#
*@~
#.@
@**
@#*
@.*
~@@
#~#
.#*
*.@

6 5 1
@@~~*
..*.@
~#@#.
##~~@
##*@*
@*@#*

*/

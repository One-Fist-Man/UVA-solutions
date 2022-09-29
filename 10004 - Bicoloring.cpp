#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ofstream fil;
    fil.open("input.txt");
    ll n,l,k=1;
    while(cin>>n)
    {

         if(n==0)
            return 0;

       ll adj[200][200];

       memset(adj,0,sizeof adj);

        vector<ll>vec[200];

        cin>>l;
        for(ll i=0; i<l; i++)
        {
            ll a,b;
            cin>>a>>b;
            adj[a][b]=1;
            adj[b][a]=1;
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
//        for(ll i=0; i<n; i++)
//        {
//            for(ll j=0; j<vec[i].size(); j++)
//            {
//                cout<<vec[i][j]<<" ";
//            }
//            cout<<endl;
//        }

        ll flag=0;

        for(ll i=0; i<n; i++)
        {
            //cout<<(int)vec[i].size()-1<<endl;
            for(ll j=0; j<(int)vec[i].size()-1; j++)
            {
                //cout<<2<<endl;
                for(ll k=j+1; k<vec[i].size(); k++)
                {
                    //cout<<3<<endl;
                    if(adj[vec[i][j]][vec[i][k]]==1)
                    {
                        //cout<<4<<endl;
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    break;
            }
            if(flag==1)
                break;
        }

        cout<<k++<<"   ";
        if(flag==1)

            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
//
//        for(ll i=0; i<n; i++)
//        {
//            vec[i].clear();
//        }


    }

    return 0;
}
/*
15
22
0 10
0 13
1 3
1 6
2 8
2 12
3 8
3 9
3 12
4 12
4 13
5 12
5 13
7 8
7 12
8 9
8 11
8 14
9 10
9 11
10 13
12 14


35
36
0 30
1 30
2 16
2 24
3 9
3 12
3 25
4 22
5 19
5 20
6 18
6 19
6 22
6 23
6 25
6 29
6 32
7 23
8 10
8 30
9 32
10 23
11 22
13 32
14 15
14 27
14 28
14 31
14 33
17 27
18 26
21 23
22 34
23 24
25 27
26 28
*/

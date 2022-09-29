#include <bits/stdc++.h>
using namespace std;
#define fast_in_out       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define pi acos(-1.0)
#define CLR(a) memset(a,0,sizeof(a))
int main()
{
//   ofstream cout;
//   fil.open("input.txt");

    fast_in_out;
    ll n,k=1;
    while(cin>>n)
    {

        vector<string>mp_index;
        map< string,int >mp;
        map<string,vector<string> > vec;
        vector<string>ans;
        for(int i=0; i<n; i++)
        {
            string a;
            cin>>a;
            mp_index.push_back(a);
            mp[a]=0;
        }
//    for(int i=0;i<mp_index.size();i++)
//    {
//       cout<<mp_index[i]<<" "<<mp[mp_index[i]]<<endl;
//    }
        ll m;
        cin>>m;
        while(m--)
        {
            string a,b;
            cin>>a>>b;
            mp[b]++;
            vec[a].push_back(b);
        }
//    for(auto i=vec.begin();i!=vec.end();i++)
//    {
//       cout<<i->first<<"-- ";
//       for(int j=0;j<vec[i->first].size();j++)
//       {
//          cout<<vec[i->first][j]<<" ";
//       }
//       cout<<endl;
//    }

        for( int i=0; i<mp_index.size(); i++)
        {
            string a=mp_index[i];
            //cout<<"i "<<i<<"-  "<<a<<"->"<<mp[a]<<endl;
            if(mp[a]==0)
            {

                ans.push_back(a);
                mp[a]=-1;
                for(int j=0; j<vec[a].size(); j++)
                {
                    // if(mp[vec[a][j]]!=0)
                    mp[vec[a][j]]--;
                    //cout<<vec[a][j]<<" "<<mp[vec[a][j]]<<endl;
                }
                i=-1;
            }
        }
        cout<<"Case #"<<k<<": Dilbert should drink beverages in this order: ";
        for(int i=0; i<ans.size(); i++)
        {

            if(i>0)
                cout<<" ";
            cout<<ans[i];
        }
        cout<<"."<<endl;
        cout<<endl;
        k++;
    }
    return 0;
}
/*
5
wine
beer
rum
apple-juice
cachaca
6
beer cachaca
apple-juice beer
apple-juice rum
beer rum
beer wine
wine cachaca
*/

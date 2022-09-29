#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long  n,b,h,w;
    while(cin>>n>>b>>h>>w)
    {
        vector<long long > vec;
        for(long long  j=0; j<h; j++)
        {
            long long  p, maxi=0;

            cin>>p;
            for(long long  i=0; i<w;i++)
            {
                long long  x;
                cin>>x;
                if(maxi<x)
                    maxi=x;
            }
            if(maxi>=n)
                vec.push_back(p);
        }
        sort(vec.begin(),vec.end());
        if(vec.size()==0) cout<<"stay home"<<endl;
        else if(vec[0]*n>b) cout<<"stay home"<<endl;
        else cout<<vec[0]*n<<endl;
        vec.clear();

    }
    return 0;
}

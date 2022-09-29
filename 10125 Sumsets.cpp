#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,p=1;
    cin>>n;
    vector<int>vec,vec2,vec3;
    set<int>st;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }

    for(int i=0; i<n-3; i++)
    {
        int a=vec[i];
        for(int j=i+1; j<n-2; j++)
        {
            int b=vec[j];
            for(int k=j+1; k<n-1; k++)
            {
                int c=vec[k]+a+b;
                if(p<100000) vec2.push_back(c);
                else vec3.push_back(c);
                p++;

            }
        }
    }
    cout<<p<<endl;

//    for(int i=0;i<=p;i++)
//    {
//        for()
//          if(i<100000)
//          {
//              if(vec[i]==)
//          }
//    }
    return 0;
}

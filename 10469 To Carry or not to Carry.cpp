#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        vector<int>vec1,vec2,vec3;

        while(a!=0||b!=0)
        {
            int x=a%2;
            a/=2;
            vec1.push_back(x);
            x=b%2;
            b/=2;
            vec2.push_back(x);
        }
        int n=max(vec1.size(),vec2.size()),c=0;

        for(int i=0; i<n; i++)
        {
            //cout<< vec1[i]+vec2[i]<<endl;
            if(vec1[i]+vec2[i]==0)
            {
                vec3.push_back(0);
            }
            else if(vec1[i]+vec2[i]==1)
            {
                vec3.push_back(1);
            }
            else if(vec1[i]+vec2[i]+c==2)
            {
                vec3.push_back(0);
            }
        }
        double sum=0;
        for(int i=0; i<vec3.size(); i++)
        {
            if(vec3[i]==1)
                sum+=pow(2,i);
        }
        cout<<sum<<endl;

    }





    return 0;

}

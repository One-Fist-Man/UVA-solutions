#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    while(cin>>n>>m)
    {
        vector<ll>vec;
        int flag=0;
        if(n>1&&m>1)
        {
            while(n!=1)
            {

                if(n%m!=0)
                {
                    flag=1;
                    break;
                }
                else
                {

                    vec.push_back(n);
                    n=n/m;
                }
            }
            vec.push_back(n);
        }
        else
        {
            flag=1;
        }

        int ck=0;
        if(flag==1)
            cout<<"Boring!"<<endl;
        else
        {
            for(ll i=0; i<vec.size(); i++)
            {
                if(ck==1)
                {
                    cout<<" "<<vec[i];
                }
                else
                    cout<<vec[i];
                ck=1;
            }
            cout<<endl;

        }

    }




    return 0;
}

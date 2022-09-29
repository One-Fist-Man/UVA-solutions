#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
        {
            cout<<0<<" "<<0<<endl;
            return 0;
        }

        multimap<int,int>mp;
        multimap<int,int>::iterator value,it;
       // vector<int>vec;

        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            int p=a%m;
            mp.insert(make_pair(a,p) );
        }

        cout<<n<<" "<<m<<endl;
        for(int i=0; i<mp.size();)
        {
            value=mp.begin();
            it=mp.begin();

            for(int j=i+1; j<mp.size(); j++)
            {
                it++;
                if(value->second>it->second)
                {
                    value=it;
                }
                else if(value->second==it->second)
                {
                    if(((value->first&1)==1)&&((it->first&1)==0))
                    {
                        value=value;
                    }
                    else if(((value->first&1)==0)&&((it->first&1)==1))
                    {
                        value=it;
                    }
                    else if(((value->first&1)==1)&&((it->first&1)==1))
                    {
                        if(value->first>it->first)
                        {
                            value=value;
                        }
                        else
                            value=it;
                    }
                    else if(((value->first&1)==0)&&((it->first&1)==0))
                    {
                        if(value->first>it->first)
                        {
                            value=it;
                        }
                        else
                            value=value;
                    }
                }
            }


            //cout<<value->first<<" "<<value->second<<endl;
            //vec.push_back(value->first);
            cout<<value->first<<endl;
            mp.erase(value);
        }
//
//        for(int i=0; i<vec.size(); i++)
//            cout<<vec[i]<<endl;
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        vector<string>vec;
        for(ll i=0; i<n; i++)

        {
            string s;
            cin>>s;
            vec.push_back(s);
        }

        sort(vec.begin(),vec.end(),greater<string>());
//
//        for(int i=0; i<vec.size(); i++)
//            cout<<vec[i]<<" ";
//        cout<<endl;

//            for(ll i=0; i<vec.size()-1; i++)
//            {
//                string p=vec[i],q=vec[i+1];
//                int flag=0;
//
//                for(ll k=0; k<q.size(); k++)
//                {
//                    for(ll l=0; l<p.size(); l++)
//                    {
//                        if(q[k]>p[l])
//                        {
//                            swap(vec[i],vec[i+1]);
//                            flag=1;
//                            break;
//                        }
//                        else if(q[k]<p[l])
//                        {
//                            flag=1;
//                            break;
//                        }
//
//                    }
//                    if(flag==1 ) break;
//                }
//                cout<<vec[i];
//            }
//            cout<<vec[vec.size()-1];

        int position;

        string mini,finals;
        for(int j=0; j<vec.size();)
        {
            mini=vec[0];
            finals=mini;
            position=0;
//            for(int i=0; i<vec.size(); i++)
//                cout<<vec[i]<<" ";
//            cout<<endl;
            for(int k=j+1; k<vec.size(); k++)
            {
                string a=vec[k];
                int flag=0;
                int p=0,l=0,counti=0;
                while(p<mini.size()||l<a.size())
                {

                    if(mini[p]>a[l])
                    {
                        finals=mini;
                        l++;
                        break;
                        //counti=0;
                    }
                    else if(mini[p]<a[l])
                    {
                        finals=a;
                        p++;

                        //counti=0;
                    }
                    else
                    {


                        if(p+1<mini.size())
                            p++;
                        else l++;
                        //
                        //counti++;
                    }
                }
                //if(counti==a.size()) finals=a;
                //int counti=0;
                // int c=mini.size(),b=a.size();
                //int siz=min(c,b);
//                for(int p=0; p<mini.size(); p++)
//                {
//                    for(int l=0; l<a.size(); l++)
//                    {
//                        if(mini[p]>a[l])
//                        {
//                            flag=1;
//                            break;
//                        }
//                        else if(mini[p]<a[l])
//                        {
//                            mini=a;
//                            flag=1;
//                            break;
//                        }
//                    }
//                    if(flag==1) break;
//                }

                    mini=finals;

                if(mini==a )
                    position=k;
            }
            cout<<mini;

             //cout<<position<<" "<<vec[position]<<endl;
            vec.erase(vec.begin()+position);
        }
        cout<<endl;

    }

    return 0;
}

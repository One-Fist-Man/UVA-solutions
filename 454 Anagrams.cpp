#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
vector<string>vec;
vector < pair<string,string> >st;
int main()
{
    ll t,flag=1;
    cin>>t;
     cin.ignore();
    while(t--)
    {
        //cout<<endl;
        string s;

        while(getline(cin,s))
        {
            if(s=="")
                break;
            vec.push_back(s);
        }

        for(int i=0; i<vec.size(); i++)
        {
            string p="";
            for(int l=0; l<vec[i].size(); l++)
            {
                if(vec[i][l]>32||vec[i][l]<32)
                    p+=vec[i][l];
            }
            sort(p.begin(),p.end());

            for(int j=i+1; j<vec.size(); j++)
            {
                string k="";
                for(int l=0; l<vec[j].size(); l++)
                {
                    if(vec[j][l]!=32)
                        k+=vec[j][l];
                }
                sort(k.begin(),k.end());

                if(p==k)
                {

                    if(vec[i]<vec[j])
                        st.push_back( make_pair(vec[i],vec[j]) ) ;
                    else
                        st.push_back( make_pair(vec[j],vec[i]) ) ;

                }

            }
        }

        for(auto it=st.begin(); it!=st.end(); it++)
        {
            cout<<it->first<<" = "<<it->second<<endl;
        }

        vec.clear();
        st.clear();
        //cout<<endl;


    }

    return 0;
}

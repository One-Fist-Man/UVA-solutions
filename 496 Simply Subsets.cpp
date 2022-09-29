#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s,s2;
    while(getline(cin,s),getline(cin,s2))
    {

        //cin.ignore();
        //getline(cin,s2);
        // cout<<s<<" "<<s2<<endl;
        string s3="";
        vector<string>vec,vec2;
        map<string,int>mp;
        for(int i=0; i<=s.size(); i++)
        {
            //cout<<s[i]<<endl;

            if(s[i]==' ' ||i==s.size())
            {
                vec.push_back(s3);
                //cout<<s3<<endl;
                mp[s3]++;
                s3="";
            }
            else
                s3+=s[i];

        }

        for(int i=0; i<=s2.size(); i++)
        {

            if(s2[i]==' '||i==s2.size())
            {
                vec2.push_back(s3);
                //cout<<s3<<endl;
                mp[s3]++;
                s3="";
            }
            else
                s3+=s2[i];
        }

//            for(int i=0; i<vec.size(); i++)
//        cout<<vec[i]<<" ";
//    cout<<endl;
//    for(int i=0; i<vec2.size(); i++)
//        cout<<vec2[i]<<" ";
//        cout<<endl;


        int counti=0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second==1)
                counti++;
            //cout<<it->second<<endl;
        }

        if(counti==mp.size())
            cout<<"A and B are disjoint"<<endl;
        else if(counti==0)
            cout<<"A equals B"<<endl;
        else
        {
            if(vec.size()>vec2.size())
                cout<<"B is a proper subset of A"<<endl;
            else if(vec.size()<vec2.size())
                cout<<"A is a proper subset of B"<<endl;
            else
                cout<<"I'm confused!"<<endl;
        }

    }



    return 0;
}

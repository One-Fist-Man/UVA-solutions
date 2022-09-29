#include<bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>
using namespace std;
typedef long long ll;
int main()
{
    map<string, vector<string> > mp;
    map<string, vector<string> >::iterator it,it3,value;
    //vector<string>it2;
    // set<string>st;
    string s,s2="";
    while(getline(cin,s))
    {
        if(s=="0")
            return 0;
        else if(s=="1")
        {
            for(it=mp.begin(); it!=mp.end();it++)
            {
                cout<<it->first<<"->";
                for( auto it2=it->second.begin();it2!=it->second.end();it2++)
                cout<<*it2<<" ";

                cout<<endl;
            }
            cout<<endl;
            for(it=mp.begin(); it!=mp.end(); it++)
            {
                cout<<1<<endl;
                for( auto it2=it->second.begin(); it2!=it->second.end(); it2++)
                {
                    int counti=0;
                    it3=it;
                    cout<<2<<endl;
                    for( it3++; it3!=mp.end(); it3++)
                    {
                        cout<<3<<endl;
                        for(auto it4=it3->second.begin(); it4!=it3->second.end(); it4++)
                        {
                            cout<<4<<endl;
                            if(*it2==*it4)
                            {
                                cout<<5<<endl;

                                cout<<*it4<<endl;
                                it3->second.erase(it4);
                                //cout<<it4<<endl;
                                counti=1;
                            }
                        }
                    }
                    if(counti==1)
                        it->second.erase(it2);
                }
//                it2=it;
//                value=it;
//                for(it2++;it2!=mp.end();it2++)
//                {
//                    if(it->second<it2->second)
//                        value=it2;
//                    else if(it->second==it2->second)
//                    {
//                        if(it->first>it2->first)
//                            value=it2;
//                    }
//                }
//                cout<<value->first<<" "<<value->second<<endl;
//                mp.erase(value);
            }
//            mp.clear();

            for(it=mp.begin(); it!=mp.end(); it++)
            {
                cout<<it->first<<"->";
                for( auto it2=it->second.begin(); it2!=it->second.end(); it2++)
                    cout<<*it2<<" ";

                cout<<endl;
            }
        }
        else if(s[0]<=90)
        {
            s2=s;
            mp[s2];
            // st.clear();
        }
        else if(s[0]>=97)
        {
            //st.insert(s);
            mp[s2].push_back(s);
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    map<string,string>mp;
    vector<string>vec;

    string all,key="",value="";
    while(getline(cin,all))
    {
        key="",value="";
        if(all=="") break;
        int counti=0;
        for(int i=0;i<all.size();i++)
        {
            if(counti==0&&all[i]!=32)
                value+=all[i];
            else if(counti==0&&all[i]==32)
                counti++;
            else if(counti==1&&all[i]!=32)
                key+=all[i];
            else if(counti==1&&all[i]==32) counti++;

        }
       // cin.ignore();
       //cout<<key<<" "<<value<<endl;
        mp[key]=value;
    }
    string s;
    while(getline(cin,s))
    {
        if(s=="") break;
        vec.push_back(s);
    }
    for(int i=0;i<vec.size();i++)
    {
       // auto it=mp.find(vec[i]);
        if(mp[vec[i]]=="") cout<<"eh"<<endl;
         else cout<<mp[vec[i]]<<endl;
    }

    return 0;
}

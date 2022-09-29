#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>st;
    string s;
    while(cin>>s)
    {
        st.insert(s);
    }

    for(auto i=st.begin();i!=st.end();i++)
    {
        int len=(*i).size();
        string ans=*i;
        for(int j=0;j<len-1;j++)
        {
            string a="";
            string b="";
//            a=ans.substr(0,j+1);
//            b=ans.substr(j+1,len-j);
            for(int k=0;k<j+1;k++)
                a+=ans[k];
            for(int k=j+1;k<len;k++)
                b+=ans[k];

                //cout<<a<<" "<<b<<endl;
                if(st.find(a)!=st.end()&&st.find(b)!=st.end())
                {
                    cout<<ans<<endl;
                    break;
                }

        }
    }


    return 0;
}

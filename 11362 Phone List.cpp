#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int bin(int n,string a,vector<string>vec)
{
    int l=0,h=n-1,mid;
    while(l<=h)
    {

        mid=(l+h)/2;
        if(vec[mid]==a)
        {
            // cout<<vec[mid]<<" "<<a<<endl;
            return 1;
        }

        else if(vec[mid]>a)
            h=mid-1;
        else
            l=mid+1;
    }
    return 0;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<string>vec;
        while(n--)
        {
            string s;
            cin>>s;
            vec.push_back(s);
        }
        sort(vec.begin(),vec.end());
//    for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
//    cout<<endl;
        int flag=0;
        for(int i=0; i<vec.size(); i++)
        {
            string a="";
            for(int j=0; j<vec[i].size()-1; j++)
            {
                a+=vec[i][j];
                //cout<<a<<endl;
                flag= bin(vec.size(),a,vec);
                if(flag==1)
                    break;

            }
            if(flag==1)
                break;
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }




    return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        set<string>st;
//        ll n;
//        cin>>n;
//        while(n--)
//        {
//            string s;
//            cin>>s;
//            st.insert(s);
//        }
//        int flag=0;
//        for(auto i=st.begin(); i!=st.end(); i++)
//        {
//            int len=(*i).size();
//            string a="";
//            string ans=*i;
//            for(int j=0; j<len-1; j++)
//            {
//                a+=ans[j];
//                if(st.find(a)!=st.end())
//                {
//                    flag=1;
//                    break;
//                }
//            }
//            if(flag==1 )
//                break;
//
//        }
//        if(flag==1)
//            cout<<"NO"<<endl;
//        else
//            cout<<"YES"<<endl;
//    }
//
//    return 0;
//}

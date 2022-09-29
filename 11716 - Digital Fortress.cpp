//#include <bits/stdc++.h>
//using namespace std;
//#define ff                first
//#define ss                second
//#define pii               pair<int,int>
//#define mk                make_pair
//#define ll                long long
//#define ull               unsigned long long
//#define pb                push_back
//#define fast_in_out       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//#define max(a,b) ((a)>(b)?(a):(b))
//#define min(a,b) ((a)<(b)?(a):(b))
//#define pi acos(-1.0)
//#define inf (1<<29)
//#define CLR(a) memset(a,0,sizeof(a))
//#define SET(a) memset(a,-1,sizeof(a))
//#define all(a) a.begin(),a.end()
//#define eps 1e-9
//#define MX 1000002
//int main()
//{
//    fast_in_out;
//    ll t;
//    cin>>t;
//    cin.ignore();
//    while(t--)
//    {
//        string s;
//        getline(cin,s);
//        int siz=s.size();
//        siz=sqrt(siz);
//        ll k=0;
//       // cout<<siz<<" "<<s.size()<<endl;
//        if((siz*siz)!=s.size())
//            cout<<"INVALID"<<endl;
//        else
//        {
//            char arr[siz+1][siz+1];
//            for(int i=0; i<siz; i++)
//            {
//                for(int j=0; j<siz; j++)
//                {
//                    arr[i][j]=s[k];
//                    k++;
//                }
//
//            }
//            for(int i=0; i<siz; i++)
//                for(int j=0; j<siz; j++)
//                    cout<<arr[j][i];
//            cout<<endl;
//        }
//    }
//
//
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string str;

        getline(cin,str);

        double m=sqrt(str.length());
        int m1=sqrt(str.length());

        if(m==m1)
        {
            for(int i=0;i<m1;i++)
            {
                for(int j=i;j<str.length();j=j+m1)
                {
                    cout<<str[j];
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"INVALID"<<endl;
        }

    }

    return 0;
}

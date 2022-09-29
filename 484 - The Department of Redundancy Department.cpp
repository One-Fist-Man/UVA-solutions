//
///   1st way
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//    vector<ll>vec,vec2;
//    unordered_map<ll,ll>mp;
//    ll n;
//    while(cin>>n)
//    {
//        mp[n]++;
//        vec.push_back(n);
//    }
//    for( ll i=0;i<vec.size();i++)
//    {
//        for( ll j=i+1;j<vec.size();j++)
//        {
//            if(vec[i]==vec[j])
//            {
//                vec.erase(vec.begin()+j);
//                j--;
//            }
//
//        }
//    }
//for( auto i=vec.begin();i!=vec.end();i++) cout<<*i<<" "<<mp[*i]<<endl;
//    return 0;
//}
//
///       2nd way
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//    vector<ll>vec,vec2;
//    unordered_map<ll,ll>mp;
//    ll n;
//    while(cin>>n)
//    {
//       if(mp.count(n)==0)
//       {
//          vec.push_back(n);
//       }
//        mp[n]++;
//
//    }
//
//for( auto i=vec.begin();i!=vec.end();i++) cout<<*i<<" "<<mp[*i]<<endl;
//    return 0;
//}
 ///      3rd way  best efficient


//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//    vector<ll>vec,vec2;
//    unordered_map<ll,ll>mp;
//    ll n;
//    while(cin>>n)
//    {
//        auto it=mp.find(n);
//       if(it==mp.end())
//       {
//          vec.push_back(n);
//       }
//        mp[n]++;
//
//    }
//
//for( auto i=vec.begin();i!=vec.end();i++) cout<<*i<<" "<<mp[*i]<<endl;
//    return 0;
//}
 ///      4th way
 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<ll>vec,vec2;
    unordered_map<ll,ll>mp;
    ll n;
    while(cin>>n)
    {

       if(mp[n]==0)
       {
          vec.push_back(n);
       }
        mp[n]++;

    }

for( auto i=vec.begin();i!=vec.end();i++) cout<<*i<<" "<<mp[*i]<<endl;
    return 0;
}

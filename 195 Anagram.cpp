#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool comparator(char a, char b){
	if(tolower(a) == tolower(b)){
		return a<b;
	}
	return tolower(a) < tolower(b);
}
int main()
{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
         set<string>all;
        string word="ABC";
        sort(word.begin(),word.end());
		//cout << word << endl;
       // cin>>s;
        while(next_permutation(word.begin(),word.end())){
			cout << word << endl;
		}
//        string p=s;
//            int flag=0;
//            while(1)
//            {
//                for(ll i=s.size()-1; i>0; i--)
//                {
//                    swap(s[i],s[i-1]);
//                     cout<<s<<endl;
//                    all.insert(s);
//                    if(p==s)
//                    {
//                        flag=1;
//                        break;
//                    }
//                }
//                if(flag==1)
//                    break;
//            }
//
////        for(auto it=all.begin(); it!=all.end(); it++)
////        {
////            cout<<*it<<endl;
////        }
//        all.clear();
//    }


    return 0;
}

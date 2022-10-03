#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
    map<int,int>mp2;
    ll solve=0;
    ll penalty=0;
    int ex=0;

};
int main()
{
    map<int,node>mp;
    mp[1].ex+=5;
    cout<<mp[1].ex<<endl;
    mp[1].ex+=5;
    cout<<mp[1].ex<<endl;
    mp[2].ex+=5;
    cout<<mp[1].ex<<endl;
    cout<<mp[2].ex<<endl;

    return 0;
}

//1 2 10 I
//3 1 11 C
//1 2 19 R
//1 2 21 C
//1 1 25 C
//2 1 5 C
//4 2 6 C
//7 1 3 I
//7 1 20 C

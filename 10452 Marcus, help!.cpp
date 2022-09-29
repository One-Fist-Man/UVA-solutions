#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define memset(arr) memset(arr,0,sizeof arr);

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,m;
    cin>>n>>m;
    char arr[n+1][m+1];
     int start[4];
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<m;i++)
        {
            char a;
            cin>>a;
            if(a=='@') start[0]=i,start[1]=j;
            if(a=='#') start[2]=i,start[3]=j;
        }
    }


    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll n,t,maxi=0,val=0;
//int dp[20];
//vector<int >vec;
//int arr[20][20];
//int ans(int sum,int k,int p,int l)
//{
//    for(int i=k;i<t;i++)
//    {
//
//        if(sum+vec[i]<=n)
//        {
//            sum+=vec[i];
//            arr[p][l]=vec[i];
//            cout<<sum<<endl;
//        }
//         ans(sum,k+1,p,l++);
////      else  if(sum+vec[i]==n)
////        {
////            sum+=vec[i];
////            cout<<sum<<endl;
////             arr[p][l]=vec[i];
////            return sum;
////        }
////        else return sum;
//    return sum;
//
//    }
//
//}
//int main()
//{
//    cin>>n;
//
//    cin>>t;
//    for(int i=0;i<t;i++)
//    {
//        int a;
//        cin>>a;
//        vec.push_back(a);
//    }
//   // for(int i=0;i<t;i++) cout<<vec[i]<<" ";
//    int sum=0,k=0,counti=0;
//    for(int i=0;i<t;i++)
//    {
//        sum=vec[i];
//        dp[0]=1;
//        arr[i][0]=vec[i];
//        sum=ans(sum,i+1,i,1);
//        if(maxi<sum)
//        {
//            maxi=sum;
//            val=i;
//        }
//        if(sum==n) break;
//    }
//    for(int i=0;i<20;i++)
//    {
//        if(arr[val][i]!=0) cout<<arr[val][i]<<" ";
//    }
//    cout<<maxi<<endl;
//    return 0;
//}
/*
 * Sai Cheemalapati
 * UVA 624: CD
 *
 */

#include<cstdio>
#include<vector>

using namespace std;

int N, M, best;
int tracks[30];
vector<int> bestpath;

void dfs(vector<int> path, int sum, int n) {
    sum += tracks[n];
    path.push_back(tracks[n]);
    if(sum > best || (sum == best && path.size() > bestpath.size())) {
        best = sum;
        bestpath = path;
    }
    for(int i = n + 1; i < M; i++) {
        if(sum + tracks[i] <= N)
            dfs(path, sum, i);
    }
}

int main() {
    while(scanf("%d %d", &N, &M) == 2) {
        for(int i = 0; i < M; i++)
            scanf("%d", &tracks[i]);
        best = 0;
        for(int i = 0; i < M; i++) {
            vector<int> path;
            dfs(path, 0, i);
        }

        for(int j = 0; j < bestpath.size(); j++)
            printf("%d ", bestpath[j]);
        printf("sum:%d\n", best);
    }
}

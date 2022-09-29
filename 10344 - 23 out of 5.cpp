#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll visit[6],sum=0,counti,arr[6],flag;
void bt(ll sum)
{
    //cout<<"counti "<<counti<<endl;
    if(sum==23&&counti==5)
    {
        // cout<<flag<<endl;
        flag=1;
        return ;
    }
    for(ll i=0; i<5; i++)
    {
        if(visit[i]==0)
        {
            counti++;
            visit[i]=1;
            bt(sum+arr[i]);
            bt(sum-arr[i]);
            bt(sum*arr[i]);
            counti--;
            visit[i]=0;
        }
    }
}
int main()
{
    //ll arr[6];
    while(cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4])
    {
       if(!arr[0]&&!arr[1]&&!arr[2]&&!arr[3]&&!arr[4]) return 0;
        for(ll i=0; i<5; i++)
        {
            if(visit[i]==0)
            {
                visit[i]=1;
                counti++;
                bt(arr[i]);
                visit[i]=0;
                counti--;
            }
        }
        if(flag==1)
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;
        flag=0,counti=0,sum=0;
    }



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>vec;
int arr[105];
void seive()
{
    for(int i=3; i*i<=100; i+=2)
    {
        if(arr[i]==0)
        {
            for(int j=i*i; j<=100; j+=i)
            {
                arr[j]=1;
            }
        }
    }
    vec.push_back(2);

    for(int i=3; i<=100; i+=2)
    {
        if(arr[i]==0)
            vec.push_back(i);
    }

}
int main()
{
    seive();

    ll n;
    while(cin>>n)
    {
        if(n==0) return 0;
        map<int,int>mp;
        for(int i=2; i<=n; i++)
        {
            int a=i;
            for(int j=0; vec[j]<=a&&a!=1; j++)
            {


                if(a%vec[j]==0)
                {
                    while(a%vec[j]==0)
                    {
                        // cout<<vec[j]<<" ";
                        mp[vec[j]]++;
                        a/=vec[j];

                    }

                }


            }
//            if(a!=1)
//                mp[a]++;
        }
        // cout<<endl;
        cout<<setw(3)<<n<<"! =";

        for(int i=0; vec[i]<=n&&i<vec.size(); i++)
        {

            cout<<setw(3)<<mp[vec[i]];
            if((i+1)%15==0&&vec[i+1]<=n&&(i+1)<vec.size())
                cout<<endl<<"      ";
        }
        cout<<endl;

    }


    return 0;
}

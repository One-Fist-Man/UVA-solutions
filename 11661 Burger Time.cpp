#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0) return 0;
        string arr;
        cin>>arr;
        ll counti=0,mini=INT_MAX,flag=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]=='D')
            {
                for(int j=i+1; j<n; j++)
                {
                    i++;
                    if(arr[j]=='R')
                    {
                        counti++;
                        mini=min(mini,counti);
                        counti=0;
                        break;

                    }
                    else if(arr[j]=='D')
                        counti=0;
                    else if(arr[j]=='Z')
                    {
                        flag=1;
                        break;
                    }
                    else
                        counti++;

                }
            }

            if(arr[i]=='R')
            {
                for(int j=i+1; j<n; j++)
                {
                    i++;
                    if(arr[j]=='D')
                    {
                        counti++;
                        mini=min(mini,counti);
                        counti=0;
                        i--;
                        break;

                    }
                    else if(arr[j]=='R')
                        counti=0;
                    else if(arr[j]=='Z')
                    {
                        flag=1;
                        break;
                    }
                    else
                        counti++;

                }
            }
            if(arr[i]=='Z')
                flag=1;
            if(flag==1)
                break;
        }
        if(flag==1)
            cout<<0<<endl;
        else
            cout<<mini<<endl;
    }

    return 0;
}

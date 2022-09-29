#include <bits/stdc++.h>

using namespace std;

#define ff                first
#define ss                second
#define pii               pair<int,int>
#define mk                make_pair
#define ll                long long
#define ull               unsigned long long
#define pb                push_back
#define fast_in_out       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    fast_in_out;
    ll t,k=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        char arr[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr[i][j]=='.')
                {
                    for(char k='A'; k<=90; k++)
                    {
                       if(i!=0)
                       {
                          if(arr[i-1][j]==k) continue;
                       }
                       if(i!=n-1)
                       {
                          if(arr[i+1][j]==k) continue;
                       }
                       if(j!=0)
                       {
                          if(arr[i][j-1]==k) continue;
                       }
                       if(j!=n-1)
                       {
                          if(arr[i][j+1]==k) continue;
                       }
                       arr[i][j]=k;
                       break;
//                        if(arr[i][j-1]!=k&&arr[i][j+1]!=k&&arr[i-1][j]!=k&&arr[i+1][j]!=k)
//                        {
//                            arr[i][j]=k;
//
//                            break;
//                        }
//                        else if(i==0&&j==0)
//                        {
//                            if(arr[i][j+1]!=k&&arr[i+1][j]!=k)
//                            {
//                                arr[i][j]=k;
//
//                                break;
//                            }
//                        }
//                        else if(i==0)
//                        {
//                            if(arr[i][j-1]!=k&&arr[i][j+1]!=k&&arr[i+1][j]!=k)
//                            {
//                                arr[i][j]=k;
//
//                                break;
//                            }
//                        }
//                        else if(i==n-1)
//                        {
//                            if(arr[i][j-1]!=k&&arr[i][j+1]!=k&&arr[i-1][j]!=k&&arr[i+1][j]!=k)
//                            {
//                                arr[i][j]=k;
//
//                                break;
//                            }
//                        }

                    }
                }
            }
        }
        cout<<"Case "<<k<<":"<<endl;
        k++;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<arr[i][j];
            cout<<endl;
        }

    }

    return 0;
}

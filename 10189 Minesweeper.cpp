#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int k=1,l=0;
    while(cin>>n>>m)
    {
        if(n==0&&m==0) return 0;
        if(l==1) cout<<endl;
        l=1;

        char arr[100][100];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='.')
                    arr[i][j]='0';
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]=='*')
                {
                    if(i>-1&&i<n&&j-1>-1&&j<m&&arr[i][j-1]!='*')
                        arr[i][j-1]+=1;
                    if(i>-1&&i<n&&j+1>-1&&j+1<m&&arr[i][j+1]!='*')
                        arr[i][j+1]+=1;
                    if(i-1>-1&&i-1<n&&j-1>-1&&j-1<m&&arr[i-1][j-1]!='*')
                        arr[i-1][j-1]+=1;
                    if(i-1>-1&&i-1<n&&j>-1&&j<m&&arr[i-1][j]!='*')
                        arr[i-1][j]+=1;
                    if(i-1>-1&&i-1<n&&j+1>-1&&j+1<m&&arr[i-1][j+1]!='*')
                        arr[i-1][j+1]+=1;
                    if(i+1>-1&&i+1<n&&j-1>-1&&j-1<m&&arr[i+1][j-1]!='*')
                        arr[i+1][j-1]+=1;
                    if(i+1>-1&&i+1<n&&j>-1&&j<m&&arr[i+1][j]!='*')
                        arr[i+1][j]+=1;
                    if(i+1>-1&&i+1<n&&j+1>-1&&j+1<m&&arr[i+1][j+1]!='*')
                        arr[i+1][j+1]+=1;

                }
            }
        }
        cout<<"Field #"<<k<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
        k++;

    }

    return 0;
}

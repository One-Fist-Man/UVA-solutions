#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        cout<<endl;
        int w;
        cin>>w;
        int arr[w][2];
        for(int i=0;i<w;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }

        if(arr[0][0]==arr[w-1][0]) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int knight(int a,int b)
{
    int arr[a][b];

    fill(arr[0],arr[0]+a*b,0);
//    for(int i=0; i<a; i++)
//    {
//        for(int j=0; j<b; j++)
//            cout<<arr[i][j]<<" ";
//    }
    int counti=0,k=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(arr[i][j]==0)
            {

                if(i+1<a&&j+2<b&&arr[i+1][j+2]>0)
                    break;
                if(i-1>-1&&j+2<b&&arr[i-1][j+2]>0)
                    break;
                if(i+1<a&&j-2>-1&&arr[i+1][j-2]>0)
                    break;
                if(i-1>-1&&j-2>-1&&arr[i-1][j-2]>0)
                    break;
                if(i+2<a&&j+1<b&&arr[i+2][j+1]>0)
                    break;
                if(i+2<a&&j-1>-1&&arr[i+2][j-1]>0)
                    break;
                if(i-2>-1&&j-1>-1&&arr[i-2][j-1]>0)
                    break;
                if(i-2>-1&&j+1<b&&arr[i-2][j+1]>0)
                    break;

                k++;
                if(i+1<a&&j+2<b)
                    arr[i+1][j+2]=k;
                if(i-1>-1&&j+2<b)
                    arr[i-1][j+2]=k;
                if(i+1<a&&j-2>-1)
                    arr[i+1][j-2]=k;
                if(i-1>-1&&j-2>-1)
                    arr[i-1][j-2]=k;
                if(i+2<a&&j+1<b)
                    arr[i+2][j+1]=k;
                if(i+2<a&&j-1>-1)
                    arr[i+2][j-1]=k;
                if(i-2>-1&&j-1>-1)
                    arr[i-2][j-1]=k;
                if(i-2>-1&&j+1<b)
                    arr[i-2][j+1]=k;
                //  cout<<i<<" "<<j<<endl;

                arr[i][j]=9;
                counti++;
            }
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    return counti;
}
int main()
{
    char c='k';
    int a,b;

    cin>>a>>b;
    if(c=='r')
        cout<<a<<endl;
    else if(c=='Q')
        cout<<a<<endl;
    else if(c=='k')
    {
        cout<<knight(a,b)<<endl;
    }
    else
        // cout<<king(a,b)<<endl;
        return 0;
}

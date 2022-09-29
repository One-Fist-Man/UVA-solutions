#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll N,n;
    while(cin>>N>>n)
    {
        if(N==0&&n==0) return 0;
        char big[N][N],small[n][n],copi[n][n];
        ///input part
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                cin>>big[i][j];
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>small[i][j];
            }
        }

        int counti=0;

///operation for normal
// cout<<"operation  for normal"<<endl;
        for(int i=0; i<(N-n)+1; i++)
        {
            for(int j=0; j<(N-n)+1; j++)
            {
                if(big[i][j]==small[0][0])
                {
                    int flag=0,f=0,g=0;
                    for(int k=i; k<i+n; k++)
                    {
                        g=0;
                        for(int l=j; l<j+n; l++)
                        {
                            if(big[k][l]!=small[f][g])
                            {
                                flag=1;
                                break;
                            }
                            //cout<<k<<","<<l<<"  ";

                            g++;
                        }
                        f++;
                        //cout<<endl;
                    }
                    if(flag==0)
                        counti++;
                }
            }
        }

        cout<<counti<<" ";
        ///swap small to copi 1
        int f=0,g=0;
        for(int i=0; i<n; i++)
        {
            g=0;
            for(int j=n-1; j>=0; j--)
            {
                copi[f][g]=small[j][i];
                g++;
            }
            f++;
        }

        /// test part
//    cout<<"test "<<endl;
//     for(int i=0;i<n;i++)
//    {
//
//        for(int j=0;j<n;j++)
//        {
//           cout<<copi[i][j];
//        }
//        cout<<endl;
//    }

        ///operation for 90*;
        //cout<<"operation for 90*"<<endl;
        counti=0;
        for(int i=0; i<(N-n)+1; i++)
        {
            for(int j=0; j<(N-n)+1; j++)
            {
                if(big[i][j]==copi[0][0])
                {
                    int flag=0,f=0,g=0;
                    for(int k=i; k<i+n; k++)
                    {
                        g=0;
                        for(int l=j; l<j+n; l++)
                        {
                            if(big[k][l]!=copi[f][g])
                            {
                                flag=1;
                                break;
                            }
                            //cout<<k<<","<<l<<"  ";
                            g++;
                        }
                        f++;
                        // cout<<endl;
                    }
                    if(flag==0)
                        counti++;
                }
            }
        }
        cout<<counti<<" ";

        ///swap copi to small
        for(int i=0; i<n; i++)
        {

            for(int j=0; j<n; j++)
            {
                small[i][j]=copi[i][j];
            }

        }

        ///swap small to copi 2
        f=0,g=0;
        for(int i=0; i<n; i++)
        {
            g=0;
            for(int j=n-1; j>=0; j--)
            {
                copi[f][g]=small[j][i];
                g++;
            }
            f++;
        }

        /// test part
//    cout<<"test "<<endl;
//     for(int i=0;i<n;i++)
//    {
//
//        for(int j=0;j<n;j++)
//        {
//           cout<<copi[i][j];
//        }
//        cout<<endl;
//    }

        ///operation for 180;
        //cout<<"operation for 180"<<endl;
        counti=0;
        for(int i=0; i<(N-n)+1; i++)
        {
            for(int j=0; j<(N-n)+1; j++)
            {
                if(big[i][j]==copi[0][0])
                {
                    int flag=0,f=0,g=0;
                    for(int k=i; k<i+n; k++)
                    {
                        g=0;
                        for(int l=j; l<j+n; l++)
                        {
                            if(big[k][l]!=copi[f][g])
                            {
                                flag=1;
                                break;
                            }

                            // cout<<k<<","<<l<<"  ";
                            g++;
                        }
                        f++;
                        //cout<<endl;
                    }

                    if(flag==0)
                        counti++;
                }
            }
        }
        cout<<counti<<" ";
        ///swap copi to small
        for(int i=0; i<n; i++)
        {

            for(int j=0; j<n; j++)
            {
                small[i][j]=copi[i][j];
            }

        }

        ///swap small to copi 3
        f=0,g=0;
        for(int i=0; i<n; i++)
        {
            g=0;
            for(int j=n-1; j>=0; j--)
            {
                copi[f][g]=small[j][i];
                g++;
            }
            f++;
        }

        /// test part
//    cout<<"test "<<endl;
//     for(int i=0;i<n;i++)
//    {
//
//        for(int j=0;j<n;j++)
//        {
//           cout<<copi[i][j];
//        }
//        cout<<endl;
//    }

        ///operation for 270*;
        //cout<<"operation for 270*"<<endl;
        counti=0;
        for(int i=0; i<(N-n)+1; i++)
        {
            for(int j=0; j<(N-n)+1; j++)
            {
                if(big[i][j]==copi[0][0])
                {
                    int flag=0,f=0,g=0;
                    for(int k=i; k<i+n; k++)
                    {
                        g=0;
                        for(int l=j; l<j+n; l++)
                        {
                            if(big[k][l]!=copi[f][g])
                            {
                                flag=1;
                                break;
                            }
                            //cout<<k<<","<<l<<"  ";
                            g++;
                        }
                        f++;
                        //cout<<endl;
                        if(flag==1)
                            break;

                    }
                    if(flag==0)
                        counti++;
                }
            }
        }
        cout<<counti<<endl;
    }

    return 0;
}

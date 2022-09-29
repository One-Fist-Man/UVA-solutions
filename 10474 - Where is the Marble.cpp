#include<bits/stdc++.h>
using namespace std;
//typedef long long int;
vector<int>vec;

int bin(int l,int h,int a)
{
    if(l<=h)
    {
        int mid=0;
        mid=(l+h)/2;
        if(vec[mid]==a)
        {
            if(vec[mid-1]==a)
            {
                bin(l,mid-1,a);
            }
            else
            return mid;
        }
        else if(vec[mid]>a)
        {
           return bin(l,mid-1,a);
        }
        else
           return bin(mid+1,h,a);
    }
    else
        return -1;

}
int bins(int l,int h,int a)
{
    while(l<=h)
    {
      int  mid=(l+h)/2;
        if(vec[mid]==a)
        {
            if(vec[mid-1]==a)
            {
                h=mid-1;
            }
            else
            return mid;
        }
        else if(vec[mid]>a)
        {
            h=mid-1;
        }
        else
           l=mid+1;
    }
    return -1;

}
int main()
{
    int n,q,k=0;
    while(cin>>n>>q)
    {
        if(n==0&&q==0)
            return 0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        cout<<"CASE# "<<++k<<":"<<endl;
        for(int i=0; i<q; i++)
        {
            int a;
            cin>>a;
            int b=lower_bound(vec.begin(),vec.end(),a);
             cout<<b<<endl;
            if(b!=-1)
                cout<<a<<" found at "<<b+1<<endl;
            else
                cout<<a<<" not found"<<endl;
        }
        vec.clear();

    }




    return 0;
}

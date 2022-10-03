#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int bin(vector<int>vec,int item )
{
    int low=0,high=vec.size()-1,mid;
    //int mid=(low+high)/2;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(vec[mid]==item)
        {
            return mid;
        }
        else if(vec[mid]>item) high=mid-1;
        else low=mid+1;
    }
}
int main()
{

    ll s,b;
    while(cin>>s>>b)
    {
        vector<int>vec;
        if(s==0&&b==0) return 0;
        int arr[s+1];
        int p=1;
        for(int i=1;i<=s;i++) vec.push_back(i);

        //for(int i=0;i<s;i++) cout<<vec[i]<<" ";
        int l[b],r[b];
        for(int i=0; i<b; i++)
        {
            cin>>l[i]>>r[i];
        }


        for(int i=0; i<b; i++)
        {

            int a=bin(vec,l[i]);;
            int b=bin(vec,r[i]);

            if(a==0)
                cout<<"*"<<" ";
            else
                cout<<vec[a-1]<<" ";
            if(b==vec.size()-1)
                cout<<"*"<<endl;
            else
                cout<<vec[b+1]<<endl;

               vec.erase(vec.begin()+a,vec.begin()+(b+1));
        }
         cout<<"-"<<endl;
    }





    return 0;
}


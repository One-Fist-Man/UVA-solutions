#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {

        if(n==0) return 0;
        vector<int>vec;
        vec.push_back(1);
        for(int i=1; i<=n; i++)
        {
            int carry=0;
            for(int j=0; j<vec.size(); j++)
            {
                int sum=vec[j]*i;
                sum+=carry;
                carry=sum/10;
                sum%=10;
                vec[j]=sum;
            }
            while(carry>0)
            {
                int a=carry%10;
                carry/=10;
                vec.push_back(a);
            }
        }
        map<int,int>mp;

        for(int i=0; i<vec.size(); i++)
        {
            mp[vec[i]]++;
        }
        cout<<n<<"! --"<<endl;
//        for(int i=0;i<10;i++)
//        {
//            cout<<"("<<i<<")"<<"   "<<mp[i];
//            if(i==4||i==9) cout<<endl;
//            else cout<<"   ";
//        }
        cout<<"   (0)   "<<mp[0]<<"   (1)   "<<mp[1]<<"   (2)   "<<mp[2]<<"   (3)   "<<mp[3]<<"   (4)   "<<mp[4]<<endl;
        cout<<"   (5)   "<<mp[5]<<"   (6)   "<<mp[6]<<"   (7)   "<<mp[7]<<"   (8)   "<<mp[8]<<"   (9)   "<<mp[9]<<endl;
    }

    return 0;
}

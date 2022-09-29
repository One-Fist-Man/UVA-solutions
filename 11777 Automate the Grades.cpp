#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i=1;
    cin>>t;
    while(t--)
    {
        double first,second,third,atten,arr[3];
        cin>>first>>second>>third>>atten>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        double avg=(arr[1]+arr[2])/2.0;
        double sum=first+second+third+atten+avg;
        //cout<<sum<<endl;
        if(sum>=90)
            cout<<"Case "<<i<<": "<<"A"<<endl;
        else if(sum>=80)
            cout<<"Case "<<i<<": "<<"B"<<endl;
        else if(sum>=70)
            cout<<"Case "<<i<<": "<<"C"<<endl;
        else if(sum>=60)
            cout<<"Case "<<i<<": "<<"D"<<endl;
        else
            cout<<"Case "<<i<<": "<<"F"<<endl;
            i++;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 struct node
 {
     string name;
     ll dd,month,year;
 };
int main()
{
    ll n;
    cin>>n;
    node value[n];

    for(ll i=0;i<n;i++)
    {
        cin>>value[i].name>>value[i].dd>>value[i].month>>value[i].year;
    }
    node maxi=value[0],mini=value[0];
    for(ll i=1;i<n;i++)
    {
       if(maxi.year<value[i].year)
       {
           maxi=value[i];
       }
       else if(maxi.year==value[i].year)
       {
           if(maxi.month<value[i].month)
           {
               maxi=value[i];
           }
           else if(maxi.month==value[i].month)
           {
               if(maxi.dd<value[i].dd)
                maxi=value[i];
           }
       }

       if(mini.year>value[i].year)
       {
           mini=value[i];
       }
       else if(mini.year==value[i].year)
       {
           if(mini.month>value[i].month)
           {
               mini=value[i];
           }
           else if(mini.month==value[i].month)
           {
               if(mini.dd>value[i].dd)
                mini=value[i];
           }
       }
    }

    cout<<maxi.name<<endl;
    cout<<mini.name<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>arr;
int main()
{
   string s;

    ll p=1;
    while(cin>>s)
    {
        cout<<"Case "<<p<<":"<<endl;
        p++;
        ll sum=0;

        for(ll i=0; i<s.size(); i++)
        {
            sum+=s[i]-'0';
            arr.push_back(sum);
        }
        ll n;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            ll a,b;
            cin>>a>>b;
            ll maxi=max(a,b),mini=min(a,b);
            if(maxi==mini)
                cout<<"Yes"<<endl;
            else if(mini==0)
            {
                if(arr[mini]==0&&arr[maxi]==0)
                    cout<<"Yes"<<endl;
                else if(arr[mini]==1&&arr[maxi]==maxi+1)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
            else if(mini>0)
            {
                ll a=maxi-(mini-1);
                ll b=arr[maxi]-arr[mini-1];
                if(arr[mini-1]==arr[maxi])
                    cout<<"Yes"<<endl;
                else if(a==b)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;

            }
        }
        arr.clear();
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<char,int>mp,mp2;
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==-1) return 0;

        string s,s2,s3="",s4="";
        cin>>s>>s2;

        for(ll i=0;i<s.size();i++)
        {
            if(mp[s[i]]==0)
            {
                s3+=s[i];
                 mp[s[i]]=1;
            }
        }
        //cout<<s3<<endl;
        for(ll i=0;i<s2.size();i++)
        {
            if(mp2[s2[i]]==0)
            {
                s4+=s2[i];
                mp2[s2[i]]=1;
            }
        }
         //cout<<s4<<endl;
        ll flag2=0,counti=0,counti2=0;
        for(ll i=0;i<s4.size();i++)
        {
            ll flag=0;
            for(ll j=0;j<s3.size();j++)
            {
                if(s3[j]==s4[i])
                {
                     flag=1;
                     break;
                }
            }
             if(flag==0) counti++;
            if(counti==7)
                break;

            if(flag==1) counti2++;
            if(counti2==s3.size()) break;

        }
        cout<<"Round "<<n<<endl;
        if(counti2==s3.size()) cout<<"You win."<<endl;
        else if(counti==7) cout<<"You lose."<<endl;
        else cout<<"You chickened out."<<endl;
        mp.clear();
        mp2.clear();
    }

    return 0;
}

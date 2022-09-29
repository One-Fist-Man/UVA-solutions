#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node2
{
    ll value=0;
    ll ex=0;
};
struct node
{
    map<int,node2>mp2;
    ll solve=0;
    ll penalty=0;
};
int main()
{
    ll t,p=0;
    cin>>t;
    cin.ignore();
    cin.ignore();
    while(t--)
    {
        if(p==1) cout<<endl;
        p=1;
        map<ll,node >mp;
        string all,a="",ci="";
        ll num=0,s=0,p=0,counti=0;
        while(getline(cin,all))
        {
            if(all=="") break;
            //cout<<"all "<<all<<endl;
            for(ll i=0; i<all.size(); i++)
            {
                if(all[i]!=32&&counti==0)
                   num=(num*10)+(all[i]-'0');
                else if(all[i]==32&&counti==0)
                    counti++;

                else if(all[i]!=32&&counti==1)
                    s=(s*10)+(all[i]-'0');
                else if(all[i]==32&&counti==1)
                    counti++;

                else  if(all[i]!=32&&counti==2)
                    p=(p*10)+(all[i]-'0');
                else if(all[i]==32&&counti==2)
                    counti++;

                else if(all[i]!=32&&counti==3)
                    ci+=all[i];
                else if(all[i]==32&&counti==3)
                    counti++;
            }

            //cout<<"num "<<num<<" s "<<s<<" p "<<p<<" ci "<<ci<<endl;

            if(ci=="C"||ci=="I")
            {
                if(ci=="C"&&mp[num].mp2[s].value==0)
                {
                   // cout<<mp[num].mp2[s].ex<<endl;
                  int a=(p+mp[num].mp2[s].ex);
                  //cout<<a<<endl;

                    mp[num].penalty+=a;
                    mp[num].solve++;
                    mp[num].mp2[s].value=1;
                }
                else if(ci=="I"&&mp[num].mp2[s].value==0)
                {
                    mp[num].mp2[s].ex+=20;
                    //cout<<mp[num].mp2[s].ex<<endl;
                }
            }
            else mp[num];

             a="",ci="";
             num=0,s=0,p=0,counti=0;
            // cout<<num<<" "<<mp[num].first<<" "<<mp[num].second<<endl;


        }
        map<ll,node >::iterator it1,it2,value;
//        for(it2=mp.begin(); it2!=mp.end(); it2++) cout<<it2->first<<" ";
//        cout<<endl;
        for( int i=0;i!=mp.size();)
        {
            it1=mp.begin();
            value=it1;
            it2=it1;
            for(it2++; it2!=mp.end(); it2++)
            {
                if(it1->second.solve<it2->second.solve)
                    value=it2;
                if(it1->second.solve==it2->second.solve)
                {
                    if(it1->second.penalty>it2->second.penalty)
                        value=it2;

                        if(it1->second.penalty==it2->second.penalty)
                        {
                             if(it1->first>it2->first)
                            value=it2;
                        }
                }
            }
            cout<<value->first<<" "<<value->second.solve<<" "<<value->second.penalty<<endl;
            mp.erase(value);
        }

    }

    return 0;
}

//1 2 10 I
//3 1 11 C
//1 2 19 R
//1 2 21 C
//1 1 25 C
//2 1 5 C
//4 2 6 C
//7 1 3 I
//7 1 20 C

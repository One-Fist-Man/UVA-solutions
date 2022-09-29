#include<bits/stdc++.h>
using namespace std;

int picone(string a,int p,string b)
{
    //cout<<b<<endl<<p-b.size()<<endl;;
    int val=b.size();
    if(p-(val-1)<0)
        return 0;
    //cout<<p-val<<endl;
    for(int i=p,j=0; i>(p-val); i--,j++ )
    {
        // cout<<a[i]<<" "<<b[j]<<endl;
        if(a[i]!=b[j])
            return 0;
    }
    return 1;
}
int upore(string a[],int i,int j,string b)
{
    int val=b.size();
    if(i-(val-1)<=-1)
        return 0;
    for(int p=i,q=0; p>(i-val); p--,q++)
    {
        if(a[p][j]!=b[q])
            return 0;
    }
    return 1;
}
int nice(string a[],int siz,int i,int j,string b)
{
    int val=b.size();
    if(i+(val-1)>=siz)
        return 0;

    for(int p=i,q=0; p<(i+val); p++,q++)
    {
        if(a[p][j]!=b[q])
            return 0;
    }
    return 1;
}
int shoja(string a,int p,string b)
{
    int val=b.size();
    if(p+(val-1)>=a.size())
        return 0;
    for(int j=0,i=p; i<p+val; j++,i++)
    {
        if(a[i]!=b[j])
            return 0;
    }
    return 1;
}
int lefttop(string a[],int i,int j,string b)
{
    int val=b.size();
    if(i-(val-1)<=-1)
        return 0;
    int k=0,l=i;
    while(l>(i-val))
    {
        if(a[l][j]!=b[k])
            return 0;
        l--,j--,k++;
    }
    return 1;
}
int leftdown(string a[],int siz,int l,int j,string b)
{
    int val=b.size();
    if(l+(val-1)>=siz)
        return 0;
    int k=0,i=l;
    while(i<(l+val))
    {
        if(a[i][j]!=b[k])
            return 0;
        i++,j--,k++;
    }
    return 1;
}
int righttop(string a[],int l,int j,string b)
{
    int val=b.size();
    if(l-(val-1)<=-1)
        return 0;
    int k=0,i=l;
    while(i>=(l-val))
    {
        if(a[i][j]!=b[k])
            return 0;
        i--,j++,k++;
    }
    return 1;
}
int rightdown(string a[],int siz,int l,int j,string b)
{
    int val=b.size();
    if(l+(val-1)>=siz)
        return 0;
    int k=0,i=l;
    while(i<(l+val))
    {
        if(a[i][j]!=b[k])
            return 0;
        i++,j++,k++;
    }
    return 1;
}


int main()
{
    int t,k=0;
    cin>>t;
    while(t--)
    {
        if(k==1) cout<<endl;
        k=1;
        int m,n;
        cin>>m>>n;
        cin.ignore();
        string s[m];
        int siz=m;
        int i=0;
        while(m--)
        {
            getline(cin,s[i]);
            //cin>>s[i];
            transform(s[i].begin(),s[i].end(),s[i].begin(),::tolower);
            // cout<<s[i]<<endl;
            i++;
        }
        int a;
        cin>>a;
        string b;
        while(a--)
        {
            cin>>b;
            transform(b.begin(),b.end(),b.begin(),::tolower);
            //  cout<<b<<endl;
            int flag=0, f=0,g=0;
            for(int i=0; i<siz; i++)
            {
                for(int j=0; j<s[i].size(); j++)
                {
                    if(s[i][j]==b[0])
                    {
                        flag=shoja(s[i],j,b);
                        if(flag==1)
                        {
                            f=i,g=j;
                            // cout<<1<<endl;
                            break;
                        }
                        flag=picone(s[i],j,b);
                        if(flag==1)
                        {
                            f=i,g=j;
                            //cout<<2<<endl;
                            break;
                        }
                        flag=upore(s,i,j,b);
                        if(flag==1)
                        {
                            f=i,g=j;
                            //cout<<3<<endl;
                            break;
                        }
                        flag=nice(s,siz,i,j,b);
                        if(flag==1)
                        {
                            f=i,g=j;
                            // cout<<4<<endl;
                            break;
                        }
                        flag=lefttop(s,i,j,b);
                        if(flag==1)
                        {
                            f=i,g=j;
                            //cout<<5<<endl;
                            break;
                        }
                        flag=leftdown(s,siz,i,j,b);
                        if(flag==1)
                        {
                            f=i,g=j;
                            // cout<<6<<endl;
                            break;
                        }
                        flag=righttop(s,i,j,b);
                        if(flag==1)
                        {
                            f=i,g=j;
                            // cout<<7<<endl;
                            break;
                        }
                        flag=rightdown(s,siz,i,j,b);
                        if(flag==1)
                        {
                            f=i,g=j;
                            // cout<<8<<endl;
                            break;
                        }
                    }
                }
                if(flag==1)
                    break;
            }
            cout<<f+1<<" "<<g+1<<endl;
        }

    }

    return 0;
}

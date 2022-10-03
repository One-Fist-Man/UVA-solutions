#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a=0;
        int arr[n+1];
        arr[0]=0;
        for(int i=1;i<=n;i++)
        {
            string s;

           getline(cin,s);

        while (s.length()==0 )
            getline(cin, s);

            int l,r,g;
            l=s.find("LEFT");
            r=s.find("RIGHT");
            g=s.find("SAME AS ");
            if(l>-1)
            {
                a--;
                arr[i]=-1;
            }

            else if(r>-1)
            {
                a++;
                arr[i]=1;
            }
            else
            {
                int k=g+8;

               // cout<<s[k]<<endl;
                int p=s[k]-'0';
                if(s[k+1]>=48&&s[k+1]<=57)
                {
                    p=(p*10)+(s[k+1]-'0');
                }
                if(s[k+2]>=48&&s[k+2]<=57)
                {
                    p=(p*10)+(s[k+2]-'0');
                }
                a+=arr[p];
                arr[i]=arr[p];
            }

        }
        cout<<a<<endl;

    }
    return 0;
}

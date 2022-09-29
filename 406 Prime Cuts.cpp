#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>vec;

void seive(ll n)
{
    int arr[n+2];
    fill(arr,arr+n+1,0);
    if(n==1)
    {
      vec.push_back(0);
    vec.push_back(1);
    }
   else if(n>1)
    {
       vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    }

    for(ll i=3; i*i<=n; i+=2)
    {
        if(arr[i]==0)
        {

            for(ll j=i*i; j<=n; j+=i+i)
            {
                arr[j]=1;
            }
        }
    }

    for(ll i=3; i<=n; i+=2)
    {
        if(arr[i]==0)
            vec.push_back(i);
    }

}

int main()
{
    ll n,c;
    while(cin>>n>>c)
    {

        seive(n);
        int p=vec.size()-1;
        int position,siz,start,endi;

        if(p%2==1)
        {
            position=(p/2)+1;
            siz=(2*c)-1;
            if(siz>p)
            {
                start=1;
                endi=p;
            }
            else
            {
                start=siz/2;
                endi=position+start;
                start=position-start;
            }

        }
        else
        {
            position=(p/2);
            siz=2*c;
            if(siz>p)
            {
                start=1;
                endi=p;
            }
            else
            {
                start=(siz/2);
                endi=position+start;
                start=position-(start-1);
            }
        }
        cout<<n<<" "<<c<<":";

        for(int i=start; i<=endi; i++)
        {
            cout<<" "<<vec[i];
        }
        cout<<endl<<endl;
        vec.clear();
    }


    return 0;
}

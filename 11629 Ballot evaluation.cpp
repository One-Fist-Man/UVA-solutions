#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    map<string,double>mp;
    vector<string>vec;
      ofstream myfile;
  myfile.open ("example.txt");

    ll p,g;
    cin>>p>>g;
    while(p--)
    {
        string s;
        double num;
        cin>>s>>num;
        cin.ignore();
        mp[s]=num;
    }
    int k=1,f=0;
    while(g--)
    { cout<<f++<<" ";
        string s,c="",s2="";
        int n=0;
        getline(cin,s);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='>'||s[i]=='<'||s[i]=='=')
            {
                c+=s[i];
                vec.push_back(s2);
                for(i++; i<s.size(); i++)
                {
                    if(s[i]=='=')
                        c+=s[i];
                    else if(s[i]>=47&&s[i]<=57)
                    {
                        n=(n*10)+s[i]-'0';
                    }
                }
            }
            else if(s[i]=='+')
            {
                vec.push_back(s2);
                s2="";
            }
            else if(s[i]==32) continue;
            else
                s2+=s[i];
        }
        double all=0;
        cout<<vec.size()<<endl;
        for(int i=0; i<vec.size(); i++)
        {
             cout<<vec[i]<<" ";
            all+=mp[vec[i]];
        }
        //myfile.open ("example.txt");
        cout<<all<<" "<<n <<" "<<c<<endl;
        cout<<"Guess #"<<k;
          //myfile<<"Guess #"<<k;
        k++;
        if(c=="<")
        {
            if(all<n)
             cout<<"1 was correct."<<endl;
             else cout<<"6 was incorrect."<<endl;
        }
          //  myfile<<" was correct."<<endl;

       if(c==">")
        {
            if(all>n)
             cout<<"1 was correct."<<endl;
             else cout<<"6 was incorrect."<<endl;
        }
        //myfile<<" was correct."<<endl;

        if(c==">=")
        {
            if(all>=n)
             cout<<"1 was correct."<<endl;
             else cout<<"6 was incorrect."<<endl;
        }
        //myfile<<" was correct."<<endl;

        if(c=="<=")
        {
            if(all<=n)
             cout<<"1 was correct."<<endl;
             else cout<<"6 was incorrect."<<endl;
        }
       // myfile<<" was correct."<<endl;

        if(c=="=")
        {            cout<<fixed<<setprecision(5)<<all<<" "<<n<<endl;

            if(all==n)
             cout<<"1 was correct."<<endl;
             else cout<<"6 was incorrect."<<endl;
        }
        //myfile<<" was correct."<<endl;
       // myfile<<" was incorrect."<<endl;


//        cout<<c<<endl;
//        cout<<n<<endl;

        vec.clear();
    }
    myfile.close();
    return 0;
}

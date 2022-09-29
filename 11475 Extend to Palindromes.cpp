#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fil;
    fil.open("myt.txt");
//    string s;
//    while(getline(cin,s))
//    {
//        int i=0,j=s.size()-1;
//        while(i<j)
//        {
//            // int k=j+1;
//            if(s[i]==s[j])
//            {
//                j--;
//            }
//            else
//                s.insert(s.begin()+j+1,1,s[i]);
//            i++;
//            // cout<<s<<endl;
//        }
//        fil<<s<<endl;
//    }

    string s;
    while(getline(cin,s))
    {
        int i=0,j=0,k=s.size()-1,len=k+1;

        while(i<k)
        {
            if(s[i]==s[k])
            {
                i++;k--;
            }
            else
            {

                for(int x=j;x<=i;x++)
                {
                    s.insert(len,1,s[x]);
                }
                k=len-1;i++;

                j=i;

            }
            //cout<<i<<" "<<k<<" "<<s<<endl;

        }
        fil<<s<<endl;

    }



    return 0;
}

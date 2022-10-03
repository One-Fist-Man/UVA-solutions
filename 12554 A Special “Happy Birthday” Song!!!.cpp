#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string s[n+1],sp[16];

   sp[0]="Happy";sp[1]="birthday";sp[2]="to";sp[3]="you";sp[4]=sp[0];sp[5]=sp[1];sp[6]=sp[2];sp[7]=sp[3];sp[8]=sp[0];
   sp[9]=sp[1];sp[10]=sp[2];sp[11]="Rujia";sp[12]=sp[0];sp[13]=sp[1];sp[14]=sp[2];sp[15]=sp[3];
   //for(int i=0;i<16;i++) cout<<sp[i]<<" ";
   for(int i=0;i<n;i++)
       cin>>s[i];

       int p=ceil(n/16.0);
       p=16*p;
       int k=0,l=0;
       for(int i=0;i<p;i++)
       {
           cout<<s[l]<<": "<<sp[k]<<endl;;
           l++;
            k++;
           if(l>=n) l=0;
           if(k>=16) k=0;

       }




    return 0;
}

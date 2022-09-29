#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int leap(ll year)
{
    int flag=0;
    if(year%100==0&&year%400==0)
        flag=1;
    else if(year%100>0&&year%4==0)
        flag=1;
        return flag;
}
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(n--)
    {
        ll value,date,month,year;
        string arr;
        cin>>arr;
        cin>>value;
        int siz=arr.size()-1;

        date=((arr[siz-1]-'0')*10)+(arr[siz]-'0');
        year=((arr[0]-'0')*1000)+((arr[1]-'0')*100)+((arr[2]-'0')*10)+(arr[3]-'0');
        if(arr.substr(5,3)=="Jan")
            month=1;
        else if(arr.substr(5,3)=="Feb")
            month=2;
        else if(arr.substr(5,3)=="Mar")
            month=3;
        else if(arr.substr(5,3)=="Apr")
            month=4;
        else if(arr.substr(5,3)=="May")
            month=5;
        else if(arr.substr(5,3)=="Jun")
            month=6;
        else if(arr.substr(5,3)=="Jul")
            month=7;
        else if(arr.substr(5,3)=="Aug")
            month=8;
        else if(arr.substr(5,3)=="Sep")
            month=9;
        else if(arr.substr(5,3)=="Oct")
            month=10;
        else if(arr.substr(5,3)=="Nov")
            month=11;
        else if(arr.substr(5,3)=="Dec")
            month=12;

        while(value!=0)
        {
            if(month==4||month==6||month==9||month==11)
            {
                int a=31-date;
                if(value>=a)
                {
                    value-=a;
                    date=1;
                    month++;
                }
                else
                {
                    date+=value;
                    value=0;
                }


            }
            else  if(month==2)
            {
                    int a=29+leap(year)-date;
                    if(value>=a)
                    {
                        value-=a;
                        date=1;
                        month++;
                    }
                    else
                    {
                        date+=value;
                        value=0;
                    }

            }
            else
            {
                int a=32-date;
                if(value>=a)
                {
                    value-=a;
                    date=1;
                    month++;
                }
                else
                {
                    date+=value;
                    value=0;
                }
                  if(month>12)
                {
                    month=1;
                    year++;
                }

            }
        }

        cout<<"Case "<<i<<": "<<year<<"-";
        if(month==1) cout<<"January-";
        else if(month==2) cout<<"February-";
        else if(month==3) cout<<"March-";
        else if(month==4) cout<<"April-";
        else if(month==5) cout<<"May-";
        else if(month==6) cout<<"June-";
        else if(month==7) cout<<"July-";
        else if(month==8) cout<<"August-";
        else if(month==9) cout<<"September-";
        else if(month==10) cout<<"October-";
        else if(month==11) cout<<"November-";
        else if(month==12) cout<<"December-";
        if(date<10)
            cout<<"0"<<date<<endl;
        else
            cout<<date<<endl;

        i++;

    }

    return 0;
}

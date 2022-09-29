#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll value,day,month,year;
    while(cin>>value>>day>>month>>year)
    {
        if(value==0&&day==0&&month==0&&year==0) return 0;
        while(value!=0)
        {
            if(month==1)
            {
                int a=32-day;
                if(value>=a)
                {
                    day=1;
                    value-=a;
                    month++;
                }
                else
                {
                    day+=value;
                    value=0;
                }
            }
            else if(month==2)
            {
                int flag=0;
                if(year%100==0&&year%400==0)
                {
                    flag=1;
                }
                else if(year%100>0&&year%4==0)
                {
                    flag=1;
                }
//                cout<<year%100<<" "<<year%4<<endl;
//                cout<<flag<<endl;
                if(flag==1)
                {
                    int a=30-day;
                    if(value>=a)
                    {
                        day=1;
                        value-=a;
                        month++;
                    }
                    else
                    {
                        day+=value;
                        value=0;
                    }
                }
                else
                {
                    int a=29-day;
                    if(value>=a)
                    {
                        day=1;
                        value-=a;
                        month++;
                    }
                    else
                    {
                        day+=value;
                        value=0;
                    }
                }
            }
            else if(month==3)
            {
                int a=32-day;
                if(value>=a)
                {
                    day=1;
                    value-=a;
                    month++;
                }
                else
                {
                    day+=value;
                    value=0;
                }
            }
            else if(month==4)
            {
                int a=31-day;
                if(value>=a)
                {
                    day=1;
                    value-=a;
                    month++;
                }
                else
                {
                    day+=value;
                    value=0;
                }
            }
            else if(month==5)
            {
                int a=32-day;
                if(value>=a)
                {
                    day=1;
                    value-=a;
                    month++;
                }
                else
                {
                    day+=value;
                    value=0;
                }
            }
            else if(month==6)
            {

                int a=31-day;
                if(value>=a)
                {
                    day=1;
                    value-=a;
                    month++;
                }
                else
                {
                    day+=value;
                    value=0;
                }
            }
            else if(month==7)
            {
                int a=32-day;
                if(value>=a)
                {
                    day=1;
                    value-=a;
                    month++;
                }
                else
                {
                    day+=value;
                    value=0;
                }
            }
            else if(month==8)
            {
                int a=32-day;
                if(value>=a)
                {
                    day=1;
                    value-=a;
                    month++;
                }
                else
                {
                    day+=value;
                    value=0;
                }
            }
            else if(month==9)
            {

                int a=31-day;
                if(value>=a)
                {
                    day=1;
                    value-=a;
                    month++;
                }
                else
                {
                    day+=value;
                    value=0;
                }
            }
            else if(month==10)
            {
                int a=32-day;
                if(value>=a)
                {
                    day=1;
                    value-=a;
                    month++;
                }
                else
                {
                    day+=value;
                    value=0;
                }
            }
            else if(month==11)
            {
                int a=31-day;
                if(value>=a)
                {
                    day=1;
                    value-=a;
                    month++;
                }
                else
                {
                    day+=value;
                    value=0;
                }
            }
            else if(month==12)
            {
                int a=32-day;
                if(value>=a)
                {
                    day=1;
                    value-=a;
                    month++;
                }
                else
                {
                    day+=value;
                    value=0;
                }
                if(month>12)
                {
                    year++;
                    month=1;
                }
            }
        }
        cout<<day<<" "<<month<<" "<<year<<endl;
    }
    return 0;
}

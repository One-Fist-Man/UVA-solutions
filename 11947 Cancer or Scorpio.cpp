#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(n--)
    {
        string arr;
        cin>>arr;
        ll value=280,date,month,year;
        date=((arr[2]-'0')*10)+(arr[3]-'0');
        month=((arr[0]-'0')*10)+(arr[1]-'0');
        year=((arr[4]-'0')*1000)+((arr[5]-'0')*100)+((arr[6]-'0')*10)+(arr[7]-'0');

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
                int flag=0;
                if(year%100==0&&year%400==0)
                    flag=1;
                else if(year%100>0&&year%4==0)
                    flag=1;
                if(flag==1)
                {
                    int a=30-date;
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
                    int a=29-date;
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


            }


             else if(month==12)
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

            }
        }

        if(month<10&&date<10) cout<<i<<" 0"<<month<<"/0"<<date<<"/"<<year<<" ";
        else if(month<10&&date>=10) cout<<i<<" 0"<<month<<"/"<<date<<"/"<<year<<" ";
        else if(month>=10&&date<10) cout<<i<<" "<<month<<"/0"<<date<<"/"<<year<<" ";
        else cout<<i<<" "<<month<<"/"<<date<<"/"<<year<<" ";


        if((month==1 &&date>=21)||(month==2&&date<=19)) cout<<"aquarius"<<endl;
        else if((month==2&&date>=20)||(month==3 &&date<=20)) cout<<"pisces"<<endl;
         else if((month==3 &&date>=21)||(month==4&&date<=20)) cout<<"aries"<<endl;
          else if((month==4&&date>=21)||(month==5 &&date<=21)) cout<<"taurus"<<endl;
           else if((month==5&&date>=22)||(month==6 &&date<=21)) cout<<"gemini"<<endl;
            else if((month==6&&date>=22)||(month==7 &&date<=22)) cout<<"cancer"<<endl;
             else if((month==7&&date>=23)||(month==8 &&date<=21)) cout<<"leo"<<endl;
              else if((month==8&&date>=22)||(month==9 &&date<=23)) cout<<"virgo"<<endl;
               else if((month==9&&date>=24)||(month==10 &&date<=23)) cout<<"libra"<<endl;
               else if((month==10&&date>=24)||(month==11 &&date<=22)) cout<<"scorpio"<<endl;
               else if((month==11&&date>=23)||(month==12 &&date<=22)) cout<<"sagittarius"<<endl;
               else if((month==12&&date>=23)||(month==1 &&date<=20)) cout<<"capricorn"<<endl;
               i++;

    }

    return 0;
}

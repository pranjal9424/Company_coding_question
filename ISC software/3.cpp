#include<iostream>
using namespace std;
int main()
{
    int year,ref_year=2001,leap=0,diff,day=0,totalday=0,fd;
    cin>>year;
    diff=year-ref_year;
    while(ref_year<year)
    {
        if(ref_year%100==0){
            if(ref_year%400==0)
                leap++;
        }
        else
            if(ref_year%4==0)
                leap++;
        ref_year++;
    }
    totalday = (diff-leap)*365+leap*366;

    fd=totalday%7;
    cout<<fd;
    if(fd==0)
        cout<<"mon";
    if(fd==1)
        cout<<"tue";
    if(fd==2)
        cout<<"wed";
    if(fd==3)
        cout<<"thu";
    if(fd==4)
        cout<<"fri";
    if(fd==5)
        cout<<"sat";
    if(fd==6)
        cout<<"sun";
}


/*
input : 2001
            output : mon
*/
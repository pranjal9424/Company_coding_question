#include<iostream>
using namespace std;
int palin(int n)
{
    int t=n,d=0;
    while(t)
    {
        d=d*10+t%10;
        t/=10;
    }
    if(d==n)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    cin>>num;
    num++;
    while(1)
    {
        if(palin(num)==1)
        {
            cout<<num;
            break;
        }
        num++;
    }
    return 1;
}


/*
input : 606
            output : 616

*/
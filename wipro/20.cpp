#include<iostream>
using namespace std;
int main()
{
    long n,val=0;
    cin>>n;
    while(n)
    {
        val=val*10+n%10;
        n/=10;
    }

    while(val)
    {
        if((val%10)%2==0)
            cout<<val%10+1;
        else
            cout<<val%10-1;
        val/=10;
    }
}

/*
             input : 245567
            output : 354476
*/
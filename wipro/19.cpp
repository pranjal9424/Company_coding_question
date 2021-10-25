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
    cout<<val;
}
/*
             input : 5783789
            output : 9873875
*/
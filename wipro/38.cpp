#include<iostream>
using namespace std;
int main()
{
    long n;
    int m=0;
    cin>>n;
    while(n)
    {
        if(n%10>m)
            m=n%10;
        n/=10;
    }
    cout<<m;
}

/*
            input : 32387634
           output : 8
*/
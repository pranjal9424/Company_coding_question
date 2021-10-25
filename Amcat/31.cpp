#include<iostream>
using namespace std;
int main()
{
    int t,id=1;
    cin>>t;
    while(t)
    {
        id*=t%10;
        t/=10;
    }
    cout<<id;
}


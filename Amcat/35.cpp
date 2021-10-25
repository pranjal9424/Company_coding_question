#include<iostream>
using namespace std;
int main()
{
    long n;
    int k,c=0;
    cin>>n>>k;
    while(n)
    {
        if(n%10!=k)
            c++;
        n/=10;
    }
        cout<<c;
}


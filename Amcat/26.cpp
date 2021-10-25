#include<iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    int sum=0;
    while(n)
    {
        if((n%10)%2==0)
            sum+=n%10;
        n/=10;
    }
    cout<<sum;
}

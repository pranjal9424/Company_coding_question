#include<iostream>
using namespace std;
int prime(int n)
{
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int n,sum=0;
    cin>>n;

    while(n)
    {
        if(prime(n%10)==1)
            sum+=n%10;
        n/=10;
    }
    cout<<sum;
}

/*
            input : 578
            output : 12
*/

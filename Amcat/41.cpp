#include<iostream>
using namespace std;
int arm(int n)
{
    int k=n,sum=0,t;
    while(k)
    {
        t=k%10;
        sum+=(t*t*t);
        k/=10;
    }
    if(sum==n)
        return 1;
    return 0;
}
int main()
{
    int n,s=0;
    cin>>n;
    if(arm(n)==1)
        while(n)
        {
            if(n%2==0)
                s+=n%10;
            n/=10;
        }
    else while(n)
        {
            if(n%2==1)
                s+=n%10;
            n/=10;
        }
    cout<<s;

}

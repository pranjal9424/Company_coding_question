#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sum=0,tm=n;
    int i;
    while(tm)
    {
        i=tm%10;
        sum=sum+(i*i*i);
        tm/=10;
    }

    if(sum==n)
        cout<<"yes";
    else
        cout<<"No";
    return 0;
}


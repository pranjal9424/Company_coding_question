#include<iostream>
using namespace std;
int main()
{
    long n,c=0;
    cin>>n;
    int arr[9]={0};
    while(n)
    {
        arr[n%10]++;
        n/=10;
    }
    for(int i=0;i<=9;i++)
        if(arr[i]>0)
            c++;
    cout<<c;
}

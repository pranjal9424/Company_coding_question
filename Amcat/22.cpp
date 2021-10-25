#include<iostream>
using namespace std;
int main()
{
    long n;
    int k;
    cin>>n>>k;
    int arr[9]={0};
    while(n)
    {
        arr[n%10]++;
        n/=10;
    }
    for(int i=0;i<9;i++)
        if(arr[i]==k)
        cout<<i;
}

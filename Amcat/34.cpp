#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int arr[9]={0},c=0;
    while(n)
    {
        arr[n%10-1]++;
        n/=10;
    }

    for(int i=0;i<9;i++)
        if(arr[i]>1)
            c++;
    cout<<c;
}

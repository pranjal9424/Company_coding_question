#include<iostream>
using namespace std;
int main()
{
    int T,j=0,n,sum=0;
    cin>>T;
    int arr[T];
    for(int i=0;i<T;i++)
        cin>>arr[i];
    while(j!=T){
        n=arr[j];
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        j++;
        cout<<sum<<" ";
        sum=0;
    }
}

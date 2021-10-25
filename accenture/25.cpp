#include <iostream>
using namespace std;
int numbersum(int* input2,int input1)
{
    int mn=1000;
    int mx=-10;

    for(int i=0;i<input1;i++){
        if(mn>input2[i])
            mn=input2[i];
        if(mx<input2[i])
            mx=input2[i];
    }

    return mn+mx;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<numbersum(arr,n);
    return 0;
}

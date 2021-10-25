#include<iostream>
using namespace std;
int CreateNumber(int a,int b,int c)
{
    int arr[3],i,j;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;

    int temp;
    // sort array
    for(i=0;i<3-1;i++)
    for (j=0;j<3-i-1;j++)
        if (arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    return ((100*arr[2])+(10*arr[1])+(arr[0]));
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<CreateNumber(a,b,c);
}



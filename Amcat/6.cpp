#include<iostream>
using namespace std;
int main()
{
    int i,s,n;
    cin>>s>>n;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<s;
        s++;
        cout<<endl;
    }
    s=s-2;
    i=i-2;
    for(int j=i;j>=0;j--)
    {
        for(int k=0;k<=j;k++)
            cout<<s;
        s--;
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int n,m,o,sum=0,temp=0;
    cin>>n>>m>>o;
    temp=n;
    sum=temp;
    temp=temp+m;
    sum=sum+temp;
    temp=temp+o;
    sum=sum+temp;

    cout<<sum;
}



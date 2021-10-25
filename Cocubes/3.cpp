#include<iostream>
using namespace std;
int div(int n,int m){
    int sum1=0,sum2=0;
    for(int i=1;i<=m;i++)
    {
        if(i%n==0)
            sum1+=i;
        else
            sum2+=i;
    }
    return sum2-sum1;
}
int main()
{
    int n,m;
    cin>>n>>m;

    cout<<div(n,m);
}

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


/*
            input : 5 3 3
            output : 24
            explan : N=1 t=5
                     N=2 t=5+3=8
                     N=3 t=5+3+3=11
                       s=(5+8+11)=24
*/
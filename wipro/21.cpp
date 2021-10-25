#include<iostream>
using namespace std;
int main()
{
    long k;
    cin>>k;
    int m=11;
    while(k){
        if(m>k%10)
            m=k%10;
        k/=10;
    }
    cout<<m;
}

/*
             input : 3455627
             output : 2
*/
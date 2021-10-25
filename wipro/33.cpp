#include<iostream>
using namespace std;
int main()
{
    int n,k,acc=0;
    cin>>n;
    while(n--)
    {
        cin>>k;
        if(k<0)
            acc++;
    }
    cout<<acc;
}

/*
              input : 10
                      -5 -3 8 -6 -7 18 10 -4 -3 11
             output : 6
*/
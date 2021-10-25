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


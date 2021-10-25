//in cpp
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int t=0;
    while(n<=m)
    {
        if(n%7==0)
        {
          t+=n;
        }
        n++;
    }
    cout<<t;
    return 0;
}

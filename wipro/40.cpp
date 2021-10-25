#include<iostream>
using namespace std;
int prime(int n)
{
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
          return 0;
    return 1;
}
int main()
{
    int s,e,sm,lg;
    cin>>s>>e;
    while(s)
    {
        if(prime(s))
        {
            sm=s;
            break;
        }
        s+=1;
    }
    while(e)
    {
        if(prime(e))
        {
            lg=e;
            break;
        }
        e-=1;
    }
    cout<<sm<<lg<<endl;
    cout<<sm+lg;
}


/*
            input : -97
                     50
            output : 50
              exp : -97+47=-50 
*/
#include<iostream>
using namespace std;
int fun(int n)
{
    int m=0,sm,dig;
    while(n!=0)
    {
        if(m<n%10)
        {
            sm=m;
            m=n%10;
        }
        else if(n%10>sm)
            sm=n%10;
        n/=10;
    }
    return m-sm;
}
int main()
{
    int a,b,c,ans;
    cin>>a>>b>>c;
    ans=fun(a)+fun(b)+fun(c);
    cout<<ans;
}

/*
           input : 3521
                   2452
                   1352
          output : 5
          explination : (5+5+5)-(3+4+3)=5 
*/
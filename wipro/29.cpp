#include<iostream>
using namespace std;
int max(int a,int b,int c)
{
    if(a>b &&  a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else return c;
}
int min(int a,int b,int c)
{
    if(a<b &&  a<c)
        return a;
    else if(b<a && b<c)
        return b;
    else return c;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min(a/1000,b/1000,c/1000);
    a%=1000;
    b%=1000;
    c%=1000;
    cout<<max(a/100,b/100,c/100);
    a%=100;
    b%=100;
    c%=100;
    cout<<min(a/10,b/10,c/10);
    a%=10;
    b%=10;
    c%=10;
    cout<<max(a,b,c);
}


/*

             input : 3521 2452 1352
            output : 1522
*/
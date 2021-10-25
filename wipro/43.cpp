#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=n,s=0,t;
    while(k)
    {
        t=k%10;
        s=s*10+t;
        k/=10;
    }
    cout<<n-s;
    return 0;
}

/*

            input : 1234
           output : -3087
             exp : 124=4321=-3087;
*/
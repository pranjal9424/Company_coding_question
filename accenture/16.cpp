#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int c=0;
    while(n)
    {
        if(n%2==0)
        {
            c++;
            n/=2;
        }
        else{
            c++;
            n-=1;
        }
    }
    cout<<c;
}

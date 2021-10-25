#include <iostream>
using namespace std;
int main()
{
    int a, b, c, i, terms;
    cin>>terms;
    a = 0;
    b = 1;
    c = 0;
    for(i=1; i<=terms; i++)
    {
        a = b;
        b = c;
        c = a + b;
    }
    cout<<c;
    return 0;
}

#include<iostream>
using namespace std;
char nextletter(char ch1,char ch2)
{
    int c=0;
    while(ch1!=ch2)
    {
        c++;
        ch1++;
    }
    ch2=ch2+c;

    return ch2;
}
int main()
{
    char ch1,ch2;
    cin>>ch1>>ch2;

    cout<<nextletter(ch1,ch2);
}


/*

    input:- c
            g
   output:- k
*/

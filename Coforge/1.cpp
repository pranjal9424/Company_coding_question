#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cin>>str;

    int i=0;
    int c=0;

    while(str[i]!=0)
    {
        if(str[i]==40)
            c++;
        if(str[i]==41)
            c--;

        i++;
    }

    if(c==0)
        cout<<"0";
    else
        cout<<"1";

    return 0;
}

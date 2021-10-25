#include<iostream>
using namespace std;
int main()
{
    int i,r,s;
    cin>>i>>r>>s;
    for(int j=1;j<s;j++)
        i+=r;
    cout<<i;
}

/*
           intput : 4
                    3
                    5
           output : 16
*/
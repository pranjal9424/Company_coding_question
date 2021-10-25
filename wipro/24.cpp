#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    double f,s;
    int b1,h1,b2,h2;
    cin>>b1>>h1>>b2>>h2;
    f=b1*h1*0.5;
    s=(b2*h2)*0.5;
    printf("%.6f",f>s?f:s);
}


/*
           intput : 4 5
                    6 10
          output : 30.000000
*/
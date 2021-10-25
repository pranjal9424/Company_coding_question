#include<stdio.h>
int charity(int n)
{
    int sum;
    sum=(n*(n+1)*(2*n+1))/6;
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",charity(n));
}


/*
Square sum upto N
           test case 1:
                 Input : 5
                 output :55
 
                 Explanation : 1^1+2^2+3^3+4^4+5^5=55

*/
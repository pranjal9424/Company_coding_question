#include<stdio.h>
int main()
{
    int n,l,sum=0;
    scanf("%d",&n);

    l=n;
    while(l!=0){
        sum=sum*10+l%10;
        l/=10;
    }
    if(sum==n)
        printf("Palindrome");
    else
        printf("Non-palindrome");
}

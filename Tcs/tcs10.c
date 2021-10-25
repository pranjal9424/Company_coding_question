#include<stdio.h>
int main()
{
    int n,l,e=0,o=0;
    scanf("%d",&n);
    while(n!=0){
        l=n%10;
        if(l%2==0)
            e+=l;
        else
           o+=l;
        n/=10;
    }
    printf("%d",abs(e-o));
}

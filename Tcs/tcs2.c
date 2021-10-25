#include<stdio.h>
void prime(int n)
{
    int flag=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("%d is prime no.",n);
    else
        printf("%d is non prime no.",n);

}
int main()
{
    int n=0;
    scanf("%d",&n);

    if(n<0){
        printf("%d print positive no.",n);
    }
    else
        prime(n);
    return 0;
}



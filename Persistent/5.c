#include<stdio.h>
#include<conio.h>
int main()
{
    int n,temp,k=0,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        if(i==k){
            sum+=temp;
            k+=2;
        }
    }
    printf("%d",sum);
}

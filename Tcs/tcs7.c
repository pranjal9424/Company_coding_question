#include<stdio.h>
float sum(int n,float fl)
{
    return (float)n+fl;
}
int main()
{
    int n;
    scanf("%d",&n);
    float fl;
    scanf("%f",&fl);
    printf("%.2f",sum(n,fl));
}

#include<stdio.h>
int perfectCube(int N)
{
    for (int i = 1; i < N; i++)
        if (i * i * i == N)
            return 1;
    return 0;
}
int  main()
{
    int n,sum=0,k,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        sum+=k;
    }
if(perfectCube(sum)==1)
    printf("Yes");

else
{
    temp=sum;
    while(perfectCube(temp)!=1)
        temp++;
    printf("%d",temp-sum);
}
}

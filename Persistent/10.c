#include<stdio.h>
int perfect(int num)
{
    for(int i=1;i<num/2;i++)
        if(i*i==num)
            return 1;
    return 0;
}
int main()
{
    int n,c=0,temp;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        if(perfect(temp))
        {
            c++;
        }
    }
    printf("%d",c);
}

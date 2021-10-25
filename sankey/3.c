#include<stdio.h>
int main()
{
    char stu[7][10];
    int i,arr[7][6], mm=580, mar[7],t=0,avg=100, name=0;

    for(int i=0;i<7;i++)
        {
            scanf("%[^\n]s", stu[i]);
            for(int j=0;j<6;j++)
                {
                    scanf("%d",&arr[i][j]);
                    t+=arr[i][j];
                }
            mar[i]=t;
            t=0;
        }
        for(i=0;i<7;i++)
                if(((mar[i]/mm)*100) < avg)
                 {
                     avg=(mar[i]/mm)*100;
                    name=i;
                 }
        printf("%s",stu[name]);
}

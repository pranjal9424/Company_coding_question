#include<stdio.h>
int rem(int m,int n){
     int i,min=0;
     for(i=1;i<=n;i++)
        if((m%i)>min)
            min=i;
   return min;   
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",rem(m,n));
}

/*
input : 25
                        11
                output : 7
                
                Explanation : remainder 0 :25%1=0
                              remainder 1 :25%2=25%3=25%4=25%6=25%8=1
                              remainder 3 :25%11=3
                              remainder 4 :25%7=4
                              remainder 5 :25%10=5
                              remainder 7 :25%9=7

*/
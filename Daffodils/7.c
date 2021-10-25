#include<stdio.h>
int prime(int k)
{
    for(int i=2;i<k-1;i++)
        if(k%i==0)
           return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);

    if(prime(n)){
        printf("No");
        return 0;
    }

    while(n!=0)
    {
        if(prime(n%10) && (n%10)!=1){
            printf("NO");
            return 0;
        }
        n/=10;
    }
    printf("YES");
}


/*
          Input : 51
          output : no

          Input : 71
          output : yes
*/
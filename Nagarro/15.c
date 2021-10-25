#include <stdio.h>
#include<math.h>
int nthPrime(int n)
{
    int i,num=2,c=0,flag,val;

    while(n!=c)
    {
        flag=1;
        for(i=2;i<num-1/*(sqrt(num)*/;i++)
            if(num%i==0){
                    flag=0;
                break;
            }
        if(flag==1){
            c++;
            val=num;
        }
        num+=1;
    }
    return val;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",nthPrime(n));
    return 0;
}

/*

Input : 5
                output : 11

                Explanation : prime series 2 3 5 7 11 13
                              5th prime no. is 11
*/
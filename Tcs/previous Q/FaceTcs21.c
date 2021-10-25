#include<stdio.h>
int main()
{
   int n;
  scanf("%d",&n);
   printf("%d",(n%9==0)?9:(n%9));
   return 0;
}

////un optimised
/*
int sumofdigits(int num);
int main()
{
    int num, sod;
    scanf("%d", &num);
    sod = num;
    while(sod >9)
    {
        sod = sumofdigits(sod);
    }
    printf("%d", sod);
    return 0;
}
int sumofdigits(int num)
{
    int rem, sum=0;
    while(num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
		num = num / 10;
    }
    return sum;
}
*/

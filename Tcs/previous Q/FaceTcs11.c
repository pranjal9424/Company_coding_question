#include <stdio.h>

int main()
{
    long int base, exponent;
    long int power = 1;
    int i;
    scanf("%ld", &base);
    scanf("%ld", &exponent);
    if(base!=0 && exponent>=0){
    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }

    printf("%ld",power);
    }
  else
    printf("Wrong input");

    return 0;
}

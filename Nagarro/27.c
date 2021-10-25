#include <stdio.h>
int findTrailingZeros(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",findTrailingZeros(n));
    return 0;
}


/*

test case 1:
                   Input : 5
                   Output : 1
*/
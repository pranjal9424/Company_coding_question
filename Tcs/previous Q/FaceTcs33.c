#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, len, count = 0;
    char str[50];
    scanf("%[^\n]s", str);
    len = strlen(str);
    for (i = 2; i <= len; i++)
    {
        count = 0;
        for (j = 2; j <= len; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%c ", str[i-1]);
        }
    }
}

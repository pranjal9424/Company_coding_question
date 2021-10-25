#include <stdio.h>
#include <string.h>

void main()
{
    char s[200];
    int count = 0, i;
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;
    }
    printf("%d", count + 1);
}

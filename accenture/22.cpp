
#include <stdio.h>
#include <string.h>
char* rev(char* str)
{
    char reverse[100],*p;
    int len, i, index, wordStart, wordEnd;
    len   = strlen(str);
    index = 0;

    wordStart = len - 1;
    wordEnd   = len - 1;

    while(wordStart > 0)
    {
        if(str[wordStart] == ' ')
        {
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = str[i];
                i++;
                index++;
            }
            reverse[index++] = ' ';
            wordEnd = wordStart - 1;
        }
        wordStart--;
    }
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    reverse[index] = '\0';

    p=reverse;
    return p;
    //return strdup(&reverse[0]);
}
int main()
{
    char str[100], reverse[100];
    scanf("%[^\n]",str);
    printf("%s",rev(str));

    return 0;
}


/*
test case 1:
                Input : welcome to mettl
                Output : mettl to welcome
           test case 2:
                Input : My name is khan
               Output : khan is name my
*/

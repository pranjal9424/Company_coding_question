#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],toSearch[100];
    gets(str);
    scanf("%[^\n]s",toSearch);

    int i, j, found,count=0;
    int stringLen, searchLen;

    stringLen = strlen(str);
    searchLen = strlen(toSearch);

    for(i=0; i <= stringLen-searchLen; i++)
    {
        found = 1;
        for(j=0; j<searchLen; j++)
            if(str[i + j] != toSearch[j]){
                found = 0;
                break;
            }

        if(found == 1)
            count++;
    }

    printf("%d",count);

    return 0;
}

/*
              Input : i am am khan
                      am
              Output : 2
*/
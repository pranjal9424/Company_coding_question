#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],rev_str[100];

    scanf("%[^\n]s",str);

    int i=0,k,len,c=0;

    len=strlen(str);
    k=len-1;

    while(k>=0)
    {
        rev_str[i]=str[k];
        i++;
        k--;
    }
    rev_str[i]='\0';

    for(int i=0;i<len;i++)
    {
        if(rev_str[i]==str[i])
        {
            c++;
        }
    }

    printf("%d",c);
    return 0;
}

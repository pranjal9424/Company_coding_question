#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    int i=0,arr[26]={0};

    while(str[i]!='\0')
    {
        if(str[i]!=' ')
            arr[str[i]-97]++;
        i++;
    }

    for(i=0;i<26;i++)
        if(arr[i]>1)
            printf("%c\n",i+97);
}

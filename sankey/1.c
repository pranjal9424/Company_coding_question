#include<stdio.h>
#include<string.h>
int main()
{
    int max=0,i=0,arr[26]={0},n;
    char str[100];
    scanf("%[^\n]s",str);
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        arr[(int)str[i]-97]++;
        i++;
    }
    for(int j=0;j<26;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
            n=j;
        }
    }
    i=0;
    while(str[i]!='\0')
    {
        if(arr[(int)str[i]-97]==max)
            {
                printf("%c %d",str[i],max);
                break;
            }
        i++;
    }
}

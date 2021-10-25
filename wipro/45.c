#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int temp;
    scanf("%[^\n]s",str);
    int n=strlen(str);
    if(n%2==0)
    {
        int i=0,j=1;
        while(n)
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            i+=2;
            j+=2;
            n-=2;
        }
    }
    else{
        int i=0,j=1;
        while(n>2)
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            i+=2;
            j+=2;
            n-=2;
        }
    }
    printf("%s",str);
}


/*
               input : 39631
              output : 93361
*/
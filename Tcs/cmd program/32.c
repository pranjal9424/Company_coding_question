#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int j=0,i=0;
    char *b,flag=0;
    while(argv[1][i++]!='\0');
    i=i-2;
    b=(char*)malloc((i+1)*sizeof(char));
    while(i>=0)
        b[j++]=argv[1][i--];
    b[j]='\0';
    i=0;
    while(argv[1][i]!='\0' || b[i]!='\0')
        if(argv[1][i]!=b[i++])
    {
        flag=1;
        break;
    }
    if(flag==0)
        printf("YES");
    else
        printf("NO");
    free(b);
}


#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int j=0,i=0;
    char *b;
    while(argv[1][i++]!='\0');
    i=i-2;
    b=(char*)malloc((i+1)*sizeof(char));
    while(i>=0)
        b[j++]=argv[1][i--];
    b[j]='\0';
    printf("%s",b);
    free(b);
}

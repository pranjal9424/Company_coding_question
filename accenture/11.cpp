#include<stdio.h>
#include<string.h>
char* fact(int n)
{
    char *p,str[100];
    int num=0;
    int i,fac=1;
    for(i=1;i<=n;i++)
    {
        fac*=i;
    }
    sprintf(str, "%d", fac);
    p=str;
    return p;
    //return strdup(&str[0]);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%s",fact(n));
}


/*
			Input : 5
            output : 120
*/
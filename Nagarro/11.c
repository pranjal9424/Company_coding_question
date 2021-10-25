#include<stdio.h>
#include<string.h>
int rotate(char* org,int k){
    char ch,str[100];
    int n,i,j,c;
    strcpy(str,org);
    n=strlen(str);
    for(i=0;i<k;i++)
    {
        ch=str[n-1];
        for(j=n-1;j>0;j--)
            str[j]=str[j-1];
        str[j]=ch;
    }
    if(strcmp(str,org)==0)
        return 1;
    else
        return 0;
}
int main()
{
    char org[100];
    scanf("%[^\n]s",org);
    int k;
    scanf("%d",&k);
    printf("%d",rotate(org,k));
}


/*
test case 1:
                Input : adaada
                        3

                output : 1
                Explanation : "adaada" when rotate 3 times given back "adaada"

           test case 2:
                Input : llohe ereth
                        2
                output : 0

*/
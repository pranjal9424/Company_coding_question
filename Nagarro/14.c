#include<stdio.h>
#include<string.h>
int rot(char* str,int n,int k)
{
    char ch,org[100];
    int l,i,j,c=0;
    strcpy(org,str);
    l=strlen(str);
    while(1)
    {
        for(j=0;j<n;j++){
        ch=org[l-1];
        for(i=l-1;i>0;i--)
            org[i]=org[i-1];
        org[i]=ch;
        }
        c++;
        if(strcmp(str,org)==0)
            break;
        for(j=0;j<k;j++){
        ch=org[l-1];
        for(i=l-1;i>0;i--)
            org[i]=org[i-1];
        org[i]=ch;
        }
        c++;
        if(strcmp(str,org)==0)
            break;
    }

    return c;
}
int main()
{
    char ch,str[100],org[100];
    scanf("%[^\n]s",str);
    int n,k;
    scanf("%d%d",&n,&k);

    printf("%d",rot(str,n,k));
}




/*

test case 1:
                 Input : AbcDef
                         1
                         2
                 output :4
 
                 Explanation : turn 1:fAbcDe
                               turn 2:DefAbc
                               turn 3:cDefAb
                               turn 4:AbcDef
*/
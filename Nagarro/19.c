#include<stdio.h>
char* after(char* str,char ch)
{
    int i=0,j;
    while(str[i]!='\0')
    {
        if(str[i]==ch){
            j=i;
            while(str[j]!='\0'){
                str[j]=str[j+1];
                j++;
            }
            continue;
        }
        i++;
    }
    return str;
}
int main()
{
    char  str[100];
    char ch;
    gets(str);
    ch=getchar();
    printf("%s",after(str,ch));
}

/*

test case 1:
             Input : Welcome to mettl
                     l

             output : Wecome to mett
 
         test case 2:
             Input : hello world omg
                     o

             output : hell wrld mg

*/
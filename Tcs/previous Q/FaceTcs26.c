#include <stdio.h>
#include <string.h>
void ren(char* str,int n,int i)
{
  if(i==n)
    return;
  ren(str,n,i+1);
    putchar(str[i]);
}
int main()
{
   char str[100];
   scanf("%[^\n]s",str);
   int n;
  n=strlen(str);
  ren(str,n,0);
   return 0;
}

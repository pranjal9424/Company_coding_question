#include <stdio.h>
int main()
{
   char str[100];
  scanf("%s",str);
  int i=0,c,n=strlen(str);
  if(n>20)
  {
   printf("Invalid Input");
  }
  else
  while(str[i]!='\0')
  {
    c=1;
    while(str[i]==str[i+1]){
       c++;
       i++;
    }
    printf("%c%d",str[i],c);
    i++;
  }
   return 0;
}
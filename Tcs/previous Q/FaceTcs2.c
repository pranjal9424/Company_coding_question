#include <stdio.h>
int count(char* str){
  int i=0,c=1;;
  while(str[i]!='\0'){
    if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
      c++;
    i++;
  }
  return c;
}
int main()
{
   char str[100];
   scanf("%[^\n]s",str);
   printf("%d",count(str));
   return 0;
}

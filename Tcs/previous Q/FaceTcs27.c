#include <stdio.h>
#include <string.h>
int main()
{
   char str[100];
  scanf("%[^\n]s",str);
  int n,i=0,flag=1;
  n=strlen(str)-1;
  while(i<=n){
    if(str[i]!=str[n]){
      flag=0;
      break;
    }
    i++;
    n--;
  }
  if(flag==0)
   printf("%s is not a palindrome",str);
  else
    printf("%s is a palindrome",str);
   return 0;
}

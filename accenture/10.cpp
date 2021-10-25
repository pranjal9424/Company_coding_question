#include <stdio.h>
#include <string.h>
int palindrome(char* str)
{
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
   return 0;
  else
    return 1;
}
int main()
{
   char str[100];
  scanf("%[^\n]s",str);
  printf("%d",palindrome(str));
   return 0;
}

/*
test case 1:
              Input : level
              output : 1
        test case 2:
              Input : abcd
              output : 0;
*/
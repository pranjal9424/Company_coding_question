#include<stdio.h>
#include<string.h>
char* reverse(char* str){
    int temp;
    int i=0,l=strlen(str)-1;
  while(i<=l){
    temp=str[i];
    str[i]=str[l];
    str[l]=temp;
    i++;
    l--;
  }
  return str;
}
int main(){
  char str[100];
  scanf("%[^\n]s",str);
  printf("%s",reverse(str));
  return 0;
}


/*

test case 1:
             Input 1: "i love programing"
             Output: "gnimargorp evol i"
*/
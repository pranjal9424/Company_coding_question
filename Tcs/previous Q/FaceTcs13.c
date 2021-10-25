#include <stdio.h>
int main()
{
   char ch,e;
   int k;
  scanf("%c",&ch);
  scanf("%d",&k);

 if(ch>='a' && ch<='z'){
   e=((ch-97)+k)%26;
    printf("%c",e+97);
 }else
  {
   e=((ch-65)+k)%26;
    printf("%c",e+65);
 }
   return 0;
}

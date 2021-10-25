#include <stdio.h>
int main()
{
   // Try out your code here
    char str[100];
    gets(str);
     int i=0,k;

    while(str[i]!='\0'){
     if(str[i]=='u' || str[i]=='o' || str[i]=='i' || str[i]=='e' || str[i]=='a' || str[i]=='U' || str[i]=='O' || str[i]=='I' || str[i]=='E' || str[i]=='A' )
     {
       k=i;
       while(str[k]!='\0')
       {
         str[k]=str[k+1];
         k++;
       }
       continue;
     }
      i++;
    }
    printf("%s",str);
    return 0;
}

#include <stdio.h>
int main()
{
    char max_char,str[100];
    int i = 0, max=0 ,arr[26]={};


    gets(str);
    while(str[i]!='\0')
    {
      if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
      if(str[i]!=' ')
           arr[str[i]-65]++;
      i++;
    }


    for(i=0; i<26; i++)
    {
        if(arr[i]>max){
          max=arr[i];
          max_char=i+65;
        }
    }


    printf("Maximum occurring character is '%c' = %d times.", max_char, max);

    return 0;
}

#include<stdio.h>
#include<string.h>
int countPalin(char* s,int n)
{
    int i,j,l,k,count=0;
    for(i=0;i<n;i++){
        if(s[i]==' ' || s[i]!='\n'){
            for(j=i;j<n;j++){
                if(s[j]==' ' || s[j]=='\n')
                    break;
            }
        }
        for(k=i,l=j-1;;){
            if(s[k]!=s[l]){
                break;
            }else if(k>=l){
                count++;
                break;
            }else {
                k++;
                l--;
                continue;
            }
        }
        i=j;
    }
    return count;
}
int main()
{
    char s[100];
    gets(s);
    int n;
    scanf("%d",&n);
    printf("%d",countPalin(s,n));
    return 0;
}





/*
test case 1:
             Input 1: "this is level 71"
             Input 2: "16"
            
             output: 1

             Explanation: the reverse of the word 'level' is 'level'.Hence the word is palindrome . As the string contains only 
                          one palindrome, so the return value will be 1.
*/
/*
int main()
{
  int i,j,k,l,len,count = 0;
  char s[80];

  gets(s);
  len = strlen(s);

  for(i=0;i<len;i++)
  {
    if(s[i] != ' ' || s[i] != '\n')
    {
      for(j=i;j<len;j++)
      {
          if(s[j] == ' ' || s[j] == '\n')
            break;
      }
    }

    for(k=i,l=j-1;;)
    {
      if(s[k] != s[l])
        break;
      else if(k >= l)
      {
        count = count + 1;
        break;
      }
      else
      {
        k = k + 1;
        l = l - 1;
      }
    }

    i = j;
  }

  printf("\n%d",count);
  return 0;
}
*/

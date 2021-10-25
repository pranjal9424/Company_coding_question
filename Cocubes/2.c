/* input 12
   input 718
   o/p AB4*/
#include <stdio.h>
#include <string.h>
char* DectoBase(int n,int num);
int main(){

    int num,n;
    scanf("%d%d",&n,&num);

    printf("%s",DectoBase(n,num));
    return 0;
}
char* DectoBase(int n,int num){
    char s[100],*f;
    int rem,qut,c=0;

    while(num){
    rem=num%n;
    num=num/n;
    if(rem>9){
        s[c]=(55+rem);
    }
    else{
        s[c]=(48+rem);
    }
    c++;
    }
    s[c]='\0';
    f=s;
    return f;
    //return strdup(&s[0]);
}

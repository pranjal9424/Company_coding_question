#include<stdio.h>
int main()
{
    int i;
    char p[100],q[100],r[100];
    gets(p);
    gets(q);
    gets(r);
    i=0;
    while(p[i]!='\0'){
        if(p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u' )
            p[i]='%';
        if(q[i]=='b' || q[i]=='c' || q[i]=='d' || q[i]=='f' || q[i]=='g' || q[i]=='h' || q[i]=='j' || q[i]=='k' || q[i]=='l' || q[i]=='m' || q[i]=='x' || q[i]=='v' || q[i]=='t' || q[i]=='q' || q[i]=='n' || q[i]=='y' || q[i]=='w' || q[i]=='s' || q[i]=='r' || q[i]=='p' || q[i]=='z' )
            q[i]='#';
        if(r[i]>='a' && r[i]<='z' )
            r[i]=r[i]-32;
        i++;
    }
    printf("%s\n%s\n%s",p,q,r);
}

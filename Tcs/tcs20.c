#include<math.h>
#include<stdio.h>
int main(void) {
float P,R,r,a,b,d,e,c;
int T;
scanf("%f",&P);
scanf("%f",&R);
while(scanf("%d",&T)==1)
{ 
r=R/100;
a=((float)1+(r/(float)12));
b=pow(a,T);
c=b*P;
e=c*(float)T;
} 
if(getchar()==EOF)
{
printf("Final_Amount %.fn",round(e)-1);
} 
else
{
printf("Invalid Inputn");
}
return 0;
}
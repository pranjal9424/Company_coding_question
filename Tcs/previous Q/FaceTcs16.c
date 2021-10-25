#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);

   float i=0.001;
   while(i*i<=n)
    i+=0.001;
   i=i-0.001;

   printf("%.2f",i);
}

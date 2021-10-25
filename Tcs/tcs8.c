#include<stdio.h>
//without loop
int main() {
//without loop
int n;
scanf("%d", &n);
if(n % 2 == 1)
{
int term_in_series = (n+1)/2;
int res = 2 * (term_in_series - 1);
printf("%d ", res);
}
else
{
int term_in_series = n/2;
int res = term_in_series - 1;
printf("%d ", res);
}

return 0;
}


//with loop
/*
int main()
{
    int n,a=0,b=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0)
            a+=1;
        else
            b+=2;
    }
    if(n%2==0)
        printf("%d ",a-1);
    else
        printf("%d ",b-2);

}*/


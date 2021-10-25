#include<stdio.h>
int main()
{
    int n,i,c,t,co=0,k;
    scanf("%d",&n);
    int arr[n],f[26]={0};
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        f['0'+arr[i]-49]++;
    }
    scanf("%d%d",&c,&t);
    for(i=0;i<10;i++){
        if(co<c && arr[i]==t){
            k=i;
            co++;
        }
    }
    printf("%c",k+49);
}

/*
               Input : 12
                       {1,3,2,6,3,3,2,6,1,1,2,6}
                       3
                       3
               output : 6
*/
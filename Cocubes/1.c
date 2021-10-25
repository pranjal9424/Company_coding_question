/*input 2
  input 40.00
  input 20.00
  
  output 52.00*/

#include<stdio.h>
float cumulativeDiscount(float arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    float arr[n];
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    
        printf("%.2f",cumulativeDiscount(arr,n));
    
}
float cumulativeDiscount(float arr[],int n){
    int c=n-1,j=0;
    float val=100;
    while(j<n){
        val=val*(100-arr[j])/100;
        j++;
    }
    val= 100-(val*100/100);
    
    return val;
}
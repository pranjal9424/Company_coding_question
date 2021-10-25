#include<stdio.h>
int gcd(int n,int* arr)
{
    int hcf;
    hcf=arr[0];
    int j=1;
    while(j<n)
    {
       if(arr[j]%hcf==0)
       {
           j++;
       }
       else
       {
           hcf=arr[j]%hcf;
           j++;
       }
    }
    return hcf;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("%d",gcd(n,arr));
    return 0;
}


/*

test case 1:
             Input 1: 3
             Input 2: {2,4,8}
            
             output: 2

             Explanation: the common factor for 2,4,8 are 1 and 2 Hence the HCF is 2
*/
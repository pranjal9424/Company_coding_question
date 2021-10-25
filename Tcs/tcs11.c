#include<stdio.h>
int main()
{
    int T;
    printf("Enter no. of test cases\n");
    scanf("%d",&T);
    while(T--){
    int n;
    printf("Enter no. of square matrix\n");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Input matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("snake equation\n");

    for(int i=0;i<n;i++){
            if(i%2==0)
               for(int j=0;j<n;j++)
                  printf("%d ",arr[i][j]);
            else
               for(int j=n-1;j>=0;j--)
                  printf("%d ",arr[i][j]);
    }
    printf("\n\n");
    }

}

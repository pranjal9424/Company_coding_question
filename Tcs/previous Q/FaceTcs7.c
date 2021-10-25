#include<stdio.h>

int main()
{
   int n;
  scanf("%d",&n);
  while(n--)
  {
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int arr1[r][c],arr2[r][c];
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
        scanf("%d",&arr1[i][j]);

    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
        scanf("%d",&arr2[i][j]);

    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
        printf("%d ",arr2[i][j]+arr1[i][j]);

  }
}

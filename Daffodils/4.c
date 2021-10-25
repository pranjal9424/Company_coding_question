#include <stdio.h>
int main()
{
  int n, i = 1, count, c,j,l=0;
  scanf("%d", &n);
  int arr[n];
  arr[0]=1;

  for (count = 1; count < n;)
  {
    for (c = 2; c <= i-1; c++)
    {
      if (i%c == 0)
        break;
    }
    if (c == i)
    {
      arr[count]=i;
      count++;
    }
    i++;
  }

  for(int i=0;i<n;i++){
    for(j=0;j<=l;j++){
        printf("%d ",arr[j]);
    }
    l++;
    printf("\n");

  }
  return 0;
}

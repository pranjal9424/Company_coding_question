#include <stdio.h>
int main()
{
   int n,f,l,flag=0,f1=-1,l1=-1;
   scanf("%d",&n);
   int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

  scanf("%d%d",&f,&l);

  for(int i=0;i<n;i++){
    if(arr[i]==f && f1==-1)
      f1=i;
  if(arr[i]==l && l1==-1)
      l1=i;
}

      printf("Element 1 index = %d\n",f1);
      printf("Element 2 index = %d",l1);
   return 0;
}

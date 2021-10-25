#include <stdio.h>
////best approach time complexity  o(n)
int* segret(int* arr,int n){
  int g=0,temp;
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      temp=arr[i];
      arr[i]=arr[g];
      arr[g]=temp;
      g++;
    }
  }
  return arr;
}
int main()
{
   int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  int *p;
  p=segret(arr,n);

  for(int i=0;i<n;i++){
    printf("%d ",p[i]);
  }
}
/////brute force
/*int main()
{
   int n,i,c=0;
   scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<n;i++)
    if(arr[i]==0)
      c++;
    for(i=0;i<c;i++)
          arr[i]=0;
  for(i=c;i<n;i++)
          arr[i]=1;

  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
   return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int g=0,temp;
    for(i=0;i<n;i++)
        if(arr[i]==0)
    {
        temp=arr[i];
        arr[i]=arr[g];
        arr[g]=temp;
        g++;
    }

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

}






*/
/*
#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",str);

    int j,i=0,arr[26]={0},max=0,k;
    for(i=0;str[i]!='\0';i++)
        arr[str[i]-97]++;

    for(i=0;i<26;i++)
        if(arr[i] > max){
            max=arr[i];
            k=i;
        }
    printf("%d",k+97);

}*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
    int  n;
    scanf("%d",&n);
    int arr[n],temp,l,i=0,j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
    l=n-1;
    while(i<=l)
    {
        temp=arr[i];
        arr[i]=arr[l];
        arr[l]=temp;
        i++;
        l--;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
    int n,bin=0,place=1;
    scanf("%d",&n);
    while(n!=0)
    {
        bin=bin+(n%2)*place;
        n/=2;
        place*=10;
    }
    printf("%d",bin);

}
*/
/*
#include<stdio.h>
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n1+n2];

  int i=0,j=0,k=0;

  while(i<n1 && j<n2)
    if(arr1[i]<arr2[j])
       arr3[k++]=arr1[i++];
    else
       arr3[k++]=arr2[j++];

       while (i < n1)
        arr3[k++] = arr1[i++];

    while (j < n2)
        arr3[k++] = arr2[j++];

    for (int i=0; i < n1+n2; i++)
        printf("%d ",arr3[i]);

    return 0;
}
*/

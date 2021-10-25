#include<stdio.h>
#include<math.h>
int main()
{
  	int n,i,j,temp;
  	scanf("%d",&n);
  	int a[n],b[n];
  	for(i=0;i<n;i++)
  		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
   	int left=0,right=n-1,flag=1;
   	for(i=n-1;i>=0;i--)
   	{
   		if(flag==1)
   		{
   			b[right--]=a[i];
			flag=0;
		}
		else
		{
			b[left++]=a[i];
			flag=1;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	return 0;
}

//YOUR CODE//

#include <stdio.h>
#include<math.h>
// Main function
int main()
{
  // Enter your code here
	int n;
	scanf("%d",&n);
	int flag=1,i;
	for(i=2;i<=n/2;i++)
		if(n%i==0){
			flag=0;
	        break;
		}
	if(flag==1)
	{
		float i=0.001;
		while(i*i<=n)
			i+=0.001;
		i=i-0.001;
		printf("%.2f",ceil(i*100)/100);
	}
	else
		printf("%d is not a prime number",n);
   return 0;
}

 //YOUR CODE ENDS//


 //SOLUTION MENTIONED BELOW //


#include <stdio.h>
#include<math.h>
int main()
{
    int n, i, flag = 0;
    double result;
    scanf("%d",&n);
    for(i = 2; i <= n/2; ++i)
    {
        // condition for nonprime number
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        result = sqrt(n);
        printf("%.2lf",result);
    }
    else
        printf("%d is not a prime number",n);
    return 0;
}

 //SOLUTION ENDS//

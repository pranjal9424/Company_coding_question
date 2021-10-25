#include <stdio.h>
#define MAX 100

int main()
{
	char str[MAX]={0};
	int i,j;

	//input string
	printf("Enter a string: ");
	scanf("%[^\n]s",str);


	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==' ' || !((str[i]>='a' && str[i]<='z' )|| (str[i]>='A' && str[i]<='Z')))
		{
			++i;
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32;
				continue;
			}
		}
		else
		{
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32;
		}
	}

	i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ' || !(str[i]>='a' && str[i]<='z')){
            j=i;
            while(str[j]!='\0'){
                str[j]=str[j+1];
                j++;
            }
        }
        i++;
    }
	printf("Capitalize string is: %s\n",str);
	return 0;
}

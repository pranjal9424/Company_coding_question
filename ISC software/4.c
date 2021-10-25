#include<stdio.h>
#include<string.h>
int main()
{
 char str[100], lon[30];
 int c=0,m=0,i,j,in=0,len;
 gets(str);
 len=strlen(str);
 in=0;
 for(i=0;i<len;i++)
	{
		if(str[i] != ' ')
		{
			c++;
		}
		else
		{
			if(c>m)
			{
				m=c;
				i=i-m;
			}
			c=0;
		}
	}
	if(c>m)
	{
		m=c;
		in=len-m;
	}
	j=0;
	for(i=in;i<in+m;i++)
	{
		lon[j] = str[i];
		j++;
	}
	lon[j] = '\0';
	printf("%s",lon);
	return 0;
}

/*
input : my name is pranjal
            output : pranjal
*/
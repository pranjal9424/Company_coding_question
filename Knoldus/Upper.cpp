// CPP program to convert given sentence
/// to camel case.
#include <bits/stdc++.h>
using namespace std;

// Function to remove spaces and convert
// into camel case
string convert(string str)
{
  int i,j;
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
        if(str[i]==' ' || !((str[i]>='a' && str[i]<='z' )|| (str[i]>='A' && str[i]<='Z'))){
            j=i;
            while(str[j]!='\0'){
                str[j]=str[j+1];
                j++;
            }
        }
        i++;
    }
	return str;
}

// Driver program
int main()
{
	string str = "cats And*doGs-are";
	cout << convert(str);
	return 0;
}

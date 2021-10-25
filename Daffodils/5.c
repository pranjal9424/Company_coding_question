#include <stdio.h>
#include<string.h>
void printSubStr(char* str, int low, int high)
{
	for (int i = low; i <= high; ++i)
		printf("%c",str[i]);
}
void longestPalSubstr(char* str)
{
    int maxLength = 1, start = 0;

    for (int i = 0; i < strlen(str); i++) {
        for (int j = i; j < strlen(str); j++) {
            int flag = 1;
            for (int k = 0; k < (j - i + 1) / 2; k++)
                if (str[i + k] != str[j - k])
                    flag = 0;
                if (flag && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }

    //printf("%s\n",str);
    printSubStr(str, start, start + maxLength - 1);

}

int main()
{
    char str[] = "forgeeksskeegfor";
    longestPalSubstr(str);
    return 0;
}


/*
                Input: "forgeeksskeegfor" 
                Output: "geeksskeeg"

                Input: Given string :"Geeks", 
                Output: "ee"
*/
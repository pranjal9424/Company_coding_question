#include<stdio.h>
#include<string.h>
char* canMakeStr2(char* str1, char* str2)
{
    // Create a count array and count frequencies
    // characters in str1.
    int count[256] = {0},n,m;
    n=strlen(str1);
    m=strlen(str2);
    for (int i = 0; i < n; i++)
        count[str1[i]]++;

    // Now traverse through str2 to check
    // if every character has enough counts
    for (int i = 0; i < m; i++)
    {
        if (count[str2[i]] == 0)
           return "No";
        count[str2[i]]--;
    }
    return "Yes";
}

// Driver Code
int main()
{
    char str1[100] ,str2[100];
    gets(str1);
    gets(str2);
    printf("%s",canMakeStr2(str1, str2));

    return 0;
}





/*
test case 1:
                   input : zbk
                           zkb
 
                 output : yes
              test case 2:
                   input : Mettl
                           Coding
 
                 output : No

*/
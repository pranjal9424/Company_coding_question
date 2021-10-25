#include<stdio.h>
#include<string.h>
int countMinReversals(char* expr)
{
    int len = strlen(expr);
    if (len % 2)
        return -1;

    int ans = 0;

    int i;

    int open = 0;

    int close = 0;

    for (i = 0; i < len; i++) {

        if (expr[i] == '{')
            open++;

        else {
            if (!open)
                close++;
            else
                open--;
        }
    }

    ans = (close / 2) + (open / 2);

    close %= 2;
    open %= 2;
    if (close)
        ans += 2;

    return ans;
}

// Driver Code
int main()
{
    char expr[] = "}}{{";

    printf("%d",countMinReversals(expr));

    return 0;
}


/*
               Input : "}{"
               Output : 2

               Input : "}{{}}{{{"
               Output : 3
*/


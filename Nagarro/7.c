#include<stdio.h>
#include<string.h>
int max(int a, int b);
int lcs( char *X, char *Y, int m, int n )
{
   if (m == 0 || n == 0)
     return 0;
   if (X[m-1] == Y[n-1])
     return 1 + lcs(X, Y, m-1, n-1);
   else
     return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}
int max(int a, int b)
{
    return (a > b)? a : b;
}
int main()
{
  char X[100];
  char Y[100];
  //scanf("%[^\n]s",X);
  //scanf("%[^\n]s",Y);
  gets(X);
  gets(Y);
  int m = strlen(X);
  int n = strlen(Y);

  printf("%d", lcs( X, Y, m, n ) );

  return 0;
}


/*

test case 1:
             Input 1: "aba"
             Input 2: "ababa"
             
             Output: 3
              
             Explanations: Length of Longest common subsequence is 3 that is "aba".

*/
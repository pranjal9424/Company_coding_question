#include <stdio.h>
#include <string.h>
int min(int a,int b)
{
  if(a>b)
      return b;
  return a;
}
int max(int a,int b)
{
  if(a<b)
    return b;
  return a;
}
void MatrixChallenge(char * strArr[], int n) {
  int A[n][n];
  int dp[n][n];
  int j,i;
  for(i=0;i<n;i++)
      for(j=0;j<n;j++)
              A[i][j]=strArr[i][j]-48;
  // code goes here
  for(i = 0; i < n; i++)
    {
        for(j = n-1; j >=0 ; j--)
        {
            if(j == n -1)
            dp[i][j] = A[i][j];
            else
            {
                if(A[i][j] > 0)
                {
                    dp[i][j] = 1 + dp[i][j+1];
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
    }
    int k; int maxArr = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            int w = dp[i][j];
            for(k = i; k < n && w > 0; k++)
            {
                w = min(w,dp[k][j]);
                maxArr = max(maxArr,(k-i + 1)*w);
            }
        }
    }
    printf("%d",maxArr);

}

int main(void) {

  // keep this function call here
  char * A[] = coderbyteInternalStdinFunction(stdin);
  int arrLength = sizeof(A) / sizeof(*A);
  MatrixChallenge(A, arrLength);
  return 0;

}

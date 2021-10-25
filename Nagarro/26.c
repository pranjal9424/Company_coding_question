#include <stdio.h>
int longestSubSeq(int* subArr, int n) {
   int length[1000]={0};
   length[0] = 1;

   for (int i = 1; i < n; i++) {
      for (int j = 0; j < i; j++) {
         if (subArr[j] < subArr[i] && length[j] > length[i])
            length[i] = length[j];
      }
      length[i]++;
   }
   int lis = 0;
   for (int i = 0; i<n; i++)
      lis = (lis> length[i])?lis:length[i];
   return lis;
}
int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
   printf("%d",longestSubSeq(arr, n));
   return 0;
}

/*

test case 1 :
                  Input : 3
                          {1,3,8}
                  output : 2
     
             test case 2 :
                  Input : 5
                          {41,18467,6334,26500,19169}
                  output : 3

*/

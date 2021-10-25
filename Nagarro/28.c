#include <stdio.h>
#include <string.h>
int longestSubSeq(char* subArr) {
    int n=strlen(subArr);
   int length[100]={0};
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
   char str[100];
   scanf("%[^\n]s",str);
   printf("%d",longestSubSeq(str));
   return 0;
}

/*

test case 1:
                 input : abzd
                 Output : 3
         
             test case 2:
                 input : bcdabdz
                 Output : 4
*/
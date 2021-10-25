#include <stdio.h>
int derangements(int N){
   if (N == 0)
      return 1;
   if (N == 1)
      return 0;
   if (N == 2)
      return 1;
   return (N - 1) * (derangements(N - 1) + derangements(N - 2));
}
int main(){
   int Numbers;
   scanf("%d",&Numbers);
   printf("%d",derangements(Numbers));
}


/*
test case 1:
             Input: n = 4
             
             Output: 9
              
             Explanations: For four elements say {0, 1, 2, 3}, there are 9
                           possible derangements {1, 0, 3, 2} {1, 2, 3, 0}
                           {1, 3, 0, 2}, {2, 3, 0, 1}, {2, 0, 3, 1}, {2, 3,1, 0}, {3, 0, 1, 2}, {3, 2, 0, 1} and {3, 2, 1, 0}
*/


#include<stdio.h>
int calculate_ways(int k, int l)
{
    //if not enough for identcal destribution
    if(k<l)
        return 1;
    int n,m,res=1;
    n=k + l - 1;
    m=l- 1;
    if (m > n - m)
        m = n - m;
    for (int i = 0; i < m; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
  return res;
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int result = calculate_ways(m, n);
    printf("%d\n", result);
    return 0;
}

/*
test case 1:
                Input : 2
                        2
                output : 3
                Explanation : destripution like {1,1},{2,0} & {0,2} so output 3

          test case 2:
                Input : 1 and 12
                output : 1
*/
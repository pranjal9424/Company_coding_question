#include <stdio.h>
#define INT_SIZE sizeof(int) * 2 /* Size of int in bits */

int main()
{
    int p_num,q_num, index, i,c=0;
    int p_bin[INT_SIZE],q_bin[INT_SIZE];

    scanf("%d%d",&p_num,&q_num);

    index = INT_SIZE - 1;

    while(index >= 0)
    {
        p_bin[index] = p_num & 1;
        q_bin[index] = q_num & 1;
        index--;

        p_num >>= 1;
        q_num >>= 1;
    }

    for(i=0; i<INT_SIZE; i++)
    {
        if(q_bin[i]!=p_bin[i])
        {
            c++;
        }
    }

    printf("%d",c);

    return 0;
}

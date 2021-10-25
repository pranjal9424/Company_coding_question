#include<iostream>
using namespace std;
int** rotatematrixbykstemp(int** arr,int m,int n,int k,int p,char cmd){
    int i;
    if(cmd=='C')
    {
        int pra=1;
        while(pra<=k)
        {
            int last=arr[0][p-1];
            for(i=0;i<m-1;i++)
            {
                arr[i][p-1]=arr[i+1][p-1];
            }
            arr[m-1][p-1]=last;
            pra++;
        }
    }
    if(cmd=='R')
    {
        int pra=1;
        while(pra<=k)
        {
            int last=arr[p-1][0];
            for(i=0;i<n-1;i++)
            {
                arr[p-1][i]=arr[p-1][i+1];
            }
            arr[p-1][n-1]=last;
            pra++;
        }
    }
    return arr;

}

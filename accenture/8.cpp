#include<iostream>
using namespace std;
int main()
{
    string pra;
    cin>>pra;

    
    ////logic start from here
    int i=0,arr[26]={0},mx=0,ch;
    while(pra[i]!='\0')
    {
        arr[pra[i]-97]++;
        i++;
    }

    for(int j=0;j<26;j++)
    {
        if(arr[j]>mx)
        {
            mx=arr[j];
            ch=j;
        }
    }
    cout<<char(ch+97);
}


/////test case
/*  
    input:  abcdd
    output: d
*/
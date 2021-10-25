#include<stdio.h>
char freq(char* str)
{
    char ch;
    int arr[26]={0},i,k,max=0,c=0;
    for(i=0;str[i]!='\0';i++)
        arr[str[i]-97]++;
    //check for max occurrence char
    for(i=0;i<26;i++)
        if(arr[i] > max){
            max=arr[i];
            k=i;
        }
        //check for duplication of max frequency
        for(i=0;i<26;i++)
            if(arr[i] == max )
                c++;
        //if highest frequency occur more than 1 return '0'
        if(c>1)
            return '0';
    return k+97;
}
int main()
{
    char str[100];
    scanf("%[^\n]s",str);

    printf("%c",freq(str));
    return 0;
}


/*
test case 1:
                  Input : abcdd
                  Output : d

           test case 2:
                  Input : puff
                  Output : f

*/

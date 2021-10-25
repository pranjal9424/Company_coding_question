#include <stdio.h>
#include<string.h>
int main()
{
    char stored[]="i like banana"; //stored string
    char input[50];
    int i,flag=0;
    scanf("%[^\n]", input);  //input string
    for(i=0;stored[i]!='\0';i++){
        if(stored[i]!=input[i])
        flag++;
    }
    if(flag==1)
    printf("yes");
    else
    printf("no");

}


/*
             test case 1 :
                  Input : i like bansna
                  Output : yes

             test case 2 :
                  Input : i like banana
                  Output : no
*/
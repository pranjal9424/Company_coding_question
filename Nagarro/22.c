#include<stdio.h>
#include<string.h>
char* find_kth_expanded(char* s,int num) {
    char ch[100],*c,fc[1];
    ch[0]=s[0];
    int j=1,i=1,l;
    for(;;){
        if(s[i]=='\0')
            break;
        if(s[i]!=49){
                if (s[i]>=50 && s[i]<=57)
                {
                    l=s[i]-48;
                    for(int k=1;k<l;k++){
                            ch[j]=s[i-1];
                            j++;
                    }
                }
                else{
                        ch[j]=s[i];
                        j++;
                }
                i++;
                continue;
        }
        i++;
    }
    ch[j]='\0';
    //printf("%s\n",ch);
    if(num>j)
        return "-1";
    fc[0]=ch[num-1];
    fc[1]='\0';
    c=fc;

    return strdup(c);
}

int main()
{
    int n;
    char s[100];
    scanf("%[^\n]s",s);
    scanf("%d",&n);
printf("%s",find_kth_expanded(s,n));
}



/*
test case 1:
                    Input : a1b1c3
                            5
                    output : c
              test case 2:
                    Input : a3b2
                            7
                    output : -1

*/
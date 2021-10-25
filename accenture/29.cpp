#include <bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int k1,k2;
    cin>>k1>>k2;

    string str1,str2;
    cin>>str1>>str2;

    int len1=str1.length();
    int len2=str2.length();

    int c=0;
    while(k1<len1 && k2<len2){
        if(str1[k1]!=str2[k2])
        {
            return -1
        }
        k1++;
        k2++;
        c++;
    }

    return c;
}

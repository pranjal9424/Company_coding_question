#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str,str2;
    cin>>str;
    int l,temp,c=0,i=0,k=str.size()-1;
    str2=str;
    l=k;
    while(i<=l)
        {
            temp=str[i];
            str[i]=str[l];
            str[l]=temp;
            i++;
            l--;
        }
    for(int j=0;j<=k;j++)
        if(str[j]==str2[j])
            c++;
    cout<<c;
}


/*
            input : alphxxdida
            output : 4
*/
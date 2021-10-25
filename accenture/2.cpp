#include<iostream>
using namespace std;
int uniqueChar(string str)
{
    int i=0,c=0;
    int arr[25]={0};
    while(str[i]!='\0')
    {
        arr[str[i]-97]++;
        i++;
    }
    for(i=0;i<25;i++)
        if(arr[i]>0)
            c++;
    return c;
}
int main()
{
    string str;
    cin>>str;
    cout<<uniqueChar(str);
}


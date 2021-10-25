#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;

    /////logic start from here
    int arr[26]={0},i=0;
    while(str[i]!='\0'){
        arr[str[i]-97]++;
        i++;
    }
    for(int j=0;j<26;j++){
        if(arr[j]>0){
            cout<<char(j+97)<<arr[j];
        }
    }

    return 0;
}

/////test case
/*
    input:  phqgh
    output: h1h2p1q1
*/
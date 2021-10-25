#include<iostream>
using namespace std;
int main()
{
    string pra;
    cin>>pra;
    char ch;
    cin>>ch;

    int i=0,arr[256]={0};

    while(pra[i]!='\0')
    {
        arr[pra[i]]++;
        i++;
    }

    cout<<arr[ch];
}

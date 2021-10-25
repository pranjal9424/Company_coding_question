#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;

    string temp;
    temp=str;

    int l=0,h=str.length()-1;
    while(l<h)
    {
        if(!((str[l]>='a' && str[l]<='z') && (str[h]>='a' && str[h]<='z')))
        {
            cout<<"you inputted a weak string";
            return 0;
        }
        char tm;
        tm=str[l];
        temp[l]=temp[h];
        temp[h]=tm;

        l++;
        h--;
    }

    if(str==temp)
        cout<<"you inputted a strong string";
    else
        cout<<"you inputted a weak string";
}

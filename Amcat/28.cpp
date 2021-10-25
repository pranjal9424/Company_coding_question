#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int l=str.size(),c=0;
    for(int i=0;i<l;i++)
    {
        if(!((str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9')))
            c++;
    }
    cout<<c;
}

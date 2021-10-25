#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;

    int i=0,j=0,l1,l2;
    l1=str1.size();
    l2=str2.size();
    while(i<l1 && j<l2)
    {
        if(str1[i]!=str2[j]){
            cout<<str1[i];
            i++;
        }
        else{
            i++;
            j++;
        }
    }
    for(int k =i;k<l1;k++)
        cout<<str1[k];
}

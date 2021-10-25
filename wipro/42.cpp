#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int c=0,n;
    n=str.size();
    for(int i=0;i<n-1;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            if(str[i+1]!='a'  || str[i+1]!='e' || str[i+1]!='i' || str[i+1]!='o' || str[i+1]!='u' || str[i+1]!='A' || str[i+1]!='E' || str[i+1]!='I' || str[i+1]!='O' || str[i+1]!='U')
                    c++;
    }
    cout<<c;
}

/*
            inout : OqPputLE
           output : 2
            exp : 'q' and 't'. 
*/
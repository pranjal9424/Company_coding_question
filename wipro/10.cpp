#include<iostream>
using namespace std;
int main()
{
    string str;
    int i,j,c=0,f;
    cin>>str;

    for(i=0;str[i];i++)
    {
        if(str[i]!=-1)
        {
        f=0;
        for(j=i+1;str[j];j++)
            if(str[i]==str[j])
            {
                f=1;
                str[j]=-1;
            }
        if(f==0)
            c++;
        }
    }
    cout<<c;
}

/*
            input : alphaadida
            output : 4
*/
#include<iostream>
using namespace std;
int main()
{
    int n,s=1,r,i;
    cin>>n;
    r=n*2;
    for(i=1;i<=r;i++)
    {
        if(i<=r/2){
            for(int j=1;j<=i;j++)
                if(j!=i)
                    cout<<s<<"*";
                else
                    cout<<s;
            s++;
        }
        else{
            s--;
            for(int j=0;j<r-i+1;j++)
                if(j!=r-i)
                    cout<<s<<"*";
                else
                    cout<<s;
        }
        cout<<endl;
    }
}


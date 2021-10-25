#include<iostream>
using namespace std;
int main()
{
    int n,counter=1,k;
    cin>>n;
    if(n%2==0)
        k=n+1;
    else
        k=n;

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(j==k/2 && i>=1 && i<=n)
                cout<<counter++;
            else
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int t,k;
    cin>>t>>k;
    int arr[t],j=0,o;
    o=t;
    while(t--)
    {
        int m=0,n;
        for(int i=0;i<k;i++)
        {
            cin>>n;
            if(m<n)
                m=n;
        }
        arr[j]=m;
        j++;
    }
    for(int i=0;i<o;i++)
        cout<<arr[i]<<" ";
}


/*
             input : 3 4
                     100 198 333 323
                     122 232 221 111
                     223 565 245 764
            output : 333 232 245 764
*/
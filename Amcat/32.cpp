#include<iostream>
using namespace std;
int main()
{
    int k,n,sm=0,m=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        if(m<k)
        {
            sm=m;
            m=k;
        }
    }
    cout<<m+sm;
}

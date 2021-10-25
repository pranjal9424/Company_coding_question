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

/*
             input : 5
                     15 26 13 7 45
             output : 71
              exp : 45+26=71
*/
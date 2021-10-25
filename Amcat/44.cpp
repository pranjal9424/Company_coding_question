#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c],m;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    for(int i=0;i<c;i++)
    {
        m=300;
        for(int j=0;j<r;j++)
            if(m>arr[j][i])
                m=arr[j][i];
        cout<<m<<" ";
    }
}

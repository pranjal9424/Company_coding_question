#include <bits/stdc++.h>
using namespace std;
int NumberOfHouse(int r,int unit,int* arr,int n)
{
    if(n==0)
    {
        return -1;
    }
    int m=r*unit;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>=m)
        {
            return i+1;
        }
    }
	return 0;
}


int main()
{
	int r,u,n;
	cin>>r>>u>>n;
    int arr[n];
	for(int i=0;i<n;i++)
        cin>>arr[i];
	cout<<NumberOfHouse(r,u,arr,n);
}


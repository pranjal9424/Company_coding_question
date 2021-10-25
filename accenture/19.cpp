#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;
	cin>>m;

	int sum=0;

	for(int i=1;i<=m;i++)
    {
        if(m%i==0)
        {
            sum+=i;
        }
    }
	cout<<sum;
	return 0;
}

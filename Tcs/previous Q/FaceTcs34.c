#include<bits/stdc++.h>
using namespace std;
int max_sum(int a[],int n)
{
  int sum[n];
    sum[0] = a[0];
    for(int i=1;i<n;i++)
    {
        sum[i] = sum[i-1]+a[i];
       // cout<<sum[i]<<" ";
    }
    int mi = 0;
    int ma = -200000;
    int cur = -200000;
    //cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(sum[i] < mi )
        mi = sum[i];
        if(sum[i] - mi > cur)
        {
            ma = sum[i];
            cur = sum[i] - mi;
        }
        //cout<<mi<<" "<<ma<<" "<<cur<<endl;
	}
	return cur;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    bool ch = 0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i] >= 0)
	        ch = 1;
	    }
	    if(ch == 0)
	    {
	        cout<<*max_element(a,a+n)<<endl;
	        continue;
	    }

	    int x = 0;
	    x = max_sum(a,n);
        int sum = a[0];
        a[0] = -a[0];
        for(int i=1;i<n;i++)
        {
            sum = sum+a[i];
            a[i] = -1*a[i];
        }
        sum = sum+max_sum(a,n);
        cout<<max(x,sum)<<endl;
	}
	return 0;
}

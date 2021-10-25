#include<iostream>
using namespace std;
int calculate(int n,int m){
    if(n>m)
        return (n*m)-(n-m);
	if(n<=m)
        return (m%n)-(m+n);
}
int main()
{
    int n,m;
    cin>>n>>m;

    cout<<calculate(n,m);
}


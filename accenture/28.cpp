#include <iostream>
using namespace std;
int pranjal(int m, int n)
{
	if (m < n)
		return 0;
	if (n == 0)
		return 1;
	return pranjal(m - 1, n) +
		pranjal(m / 2, n - 1);
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<< pranjal(m, n);
	return 0;
}

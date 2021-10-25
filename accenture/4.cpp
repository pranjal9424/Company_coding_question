#include <bits/stdc++.h>
using namespace std;
int Sumprimefactor(int n)
{
	int arr[n+1] = { 0 };

	for (int i = 2; i <= n; ++i) {
		if (!arr[i]) {
			for (int j = i; j <= n; j += i) {
				arr[j] += i;
			}
		}
	}
	return arr[n];
}


int main()
{
	int n;
	cin>>n;
	cout<< Sumprimefactor(n);
}

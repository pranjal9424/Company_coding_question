#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
	int fact = 1;
	for (int i = 2; i <= n; i++)
		fact = fact * i;
	return fact;
}
int countDistinctPermutations(string str)
{
	int length = str.length();

	int freq[26];
	memset(freq, 0, sizeof(freq));
	for (int i = 0; i < length; i++)
		if (str[i] >= 'a')
			freq[str[i] - 'a']++;
	int fact = 1;
	for (int i = 0; i < 26; i++)
		fact = fact * factorial(freq[i]);
	return factorial(length) / fact;
}
int main()
{
	string str;
	cin>>str;
    printf("%d", countDistinctPermutations(str));
	return 0;
}

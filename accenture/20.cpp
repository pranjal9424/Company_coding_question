#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int count = 0;

    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                if (arr[i] * arr[j] * arr[k] == m)
                    count++;
    cout << count;

    return 0;
}

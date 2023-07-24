#include <bits/stdc++.h>
using namespace std;

bool checkIfSortRotated(int arr[], int n)
{
    int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i-1] > arr[i]) {
            count++;
		}
	}
    if(arr[n-1] > arr[0])
    {
        count++;
    }

    return count<=1;
}

int main()
{
	int arr[] = { 3, 4, 5, 1, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << checkIfSortRotated(arr, n);
	return 0;
}

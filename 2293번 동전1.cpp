#include <iostream>

using namespace std;

int main(void) {
	int	n, k;
	int arr[101];
	int arr2[10001] = { 0, };

	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		arr[i] = x;
	}
	arr2[0] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= k; j++)
			if (arr[i] <= j)
				arr2[j] += arr2[j - arr[i]];
	cout << arr2[k];
	return 0;
}
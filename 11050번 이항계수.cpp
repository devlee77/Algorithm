#include <iostream>

using namespace std;

int arr[11][11];

int dp(int n, int k) {
	if (k == 0 || n == k)
		return 1;
	if (arr[n][k] != 0)
		return arr[n][k];
	return arr[n][k] = dp(n - 1, k - 1) + dp(n - 1, k);
}

int main(void) {
	int n, k;

	cin >> n >> k;
	cout << dp(n, k);
	return 0;
}
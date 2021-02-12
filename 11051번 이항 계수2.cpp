#include <iostream>

using namespace std;

long arr[1001][1001];

long dp(int n, int k) {
	if (n == k || k == 0)
		return 1;
	if (arr[n][k])
		return arr[n][k];
	return arr[n][k] = (dp(n - 1, k) + dp(n - 1, k - 1)) % 10007;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	cout << dp(n, k);
	return 0;
}
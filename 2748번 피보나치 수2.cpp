#include <iostream>

using namespace std;

long long arr[91];

long long dp(int n) {
	if (n == 0) return 0;
	if (arr[n] != 0)
		return arr[n];
	return arr[n] = dp(n - 1) + dp(n - 2);
}

int main(void) {
	int n;
	arr[0] = 0;
	arr[1] = 1;

	cin >> n;
	cout << dp(n);
	return 0;
}
#include <iostream>

using namespace std;

long arr[1001];

long dp(int n) {
	if (arr[n])
		return arr[n];
	return arr[n] = (dp(n - 1) + dp(n - 2) * 2) % 10007;
}

int main(void) {
	int n;
	cin >> n;
	arr[1] = 1;
	arr[2] = 3;
	cout << dp(n);
	return 0;
}
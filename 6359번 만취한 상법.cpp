#include <iostream>

using namespace std;

bool arr[101];

int ans(int n) {
	for (int i = 1; i <= n; i++) {
		int tmp = 1;
		while (i * tmp <= n) {
			arr[i*tmp] = !arr[i*tmp];
			tmp++;
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		if (arr[i]) {
			cnt++;
			arr[i] = 0;
		}
	return cnt;
}

int main(void) {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << ans(n) << endl;
	}
	return 0;
}
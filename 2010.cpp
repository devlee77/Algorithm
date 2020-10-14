#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	long long ans = 0;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		ans += x;
	}

	ans -= (n - 1);
	cout << ans << endl;

	return 0;
}
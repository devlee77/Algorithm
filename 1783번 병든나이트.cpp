#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int n, m;

	cin >> n >> m;
	if (n == 1)
		cout << 1;
	if (n == 2)
		cout << min(4, (m + 1) / 2);
	if (n > 2) {
		if (m >= 7) {
			cout << m - 2;
		}
		else if (m < 7) {
			cout << min(4, m);
		}
	}
	return 0;
}
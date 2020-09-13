#include <iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	int a = 100, b = 100;

	cin >> n;

	while (n--) {
		int x, y;
		cin >> x >> y;

		if (x > y) {
			b -= x;
		}
		else if (x < y) {
			a -= y;
		}
	}

	cout << a << endl << b;

	return 0;
}
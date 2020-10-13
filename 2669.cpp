#include <iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[101][101] = { 0, };
	int n = 4;

	while (n--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		for (int i = a; i < c; i++) {
			for (int j = b; j < d; j++) {
				arr[i][j] = 1;
			}
		}
	}

	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (arr[i][j] == 1)
				sum++;
		}
	}
	cout << sum << endl;
	return 0;
}
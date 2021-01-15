#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int arr[10] = { 1,1,1,1,1,1,1,1,1,1 };

bool check(int i) {
	if (i == 0) {
		if (arr[0])
			return (true);
		return (false);
	}
	while (i) {
		if (arr[i % 10] == 1)
			i /= 10;
		else
			return (false);
	}
	return (true);
}

int main(void) {
	int n, m;

	cin >> n;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		arr[x] = 0;
	}
	int result = abs(n - 100);
	for (int i = 0; i <= 1000000; i++) {
		if (check(i)) {
			string str = to_string(i);
			int tmp = str.length();
			result = min(result, abs(n - i) + tmp);
		}
	}
	cout << result;

	return 0;
}
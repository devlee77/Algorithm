#include <iostream>
#include <string>

using namespace std;

int check_sum(int n) {
	int tmp = n;

	while (n) {
		tmp += n % 10;
		n /= 10;
	}
	return tmp;
}

int main(void) {
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		if (check_sum(i) == n) {
			cout << i;
			return 0;;
		}
	}
	cout << 0;
	return 0;
}
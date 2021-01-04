#include <iostream>

using namespace std;

bool check(int n) {
	if (n < 100) return true;
	
	int a, b, c;

	a = n / 100;
	b = n % 100 / 10;
	c = n % 100 % 10;
	if ((a - b) == (b - c))
		return true;
	else
		return false;
}

int main(void) {
	int n, result = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
		if (check(i)) result++;
	cout << result;
	return 0;
}
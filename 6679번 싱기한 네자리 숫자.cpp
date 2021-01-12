#include <iostream>
#include <vector>

using namespace std;

bool is_check(int n) {
	int tmp, a = 0, b = 0, c = 0;

	tmp = n;
	while (tmp) {
		a += tmp % 10;
		tmp /= 10;
	}
	tmp = n;
	while (tmp) {
		b += tmp % 12;
		tmp /= 12;
	}
	tmp = n;
	while (tmp) {
		c += tmp % 16;
		tmp /= 16;
	}
	if ((a == b) && (b == c))
		return true;
	return false;
}

int main(void) {
	for (int i = 1000; i < 10000; i++)
		if (is_check(i))
			cout << i << endl;
	return 0;
}
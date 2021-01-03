#include <iostream>

using namespace std;

int main() {
	int num, ans;
	bool minus;

	while (scanf("%d", &num) != EOF) {
		if (num < 0) {
			minus = true;
		}
		if (minus) {
			num = num > 0 ? num : -num;
			ans -= num;
		}
		else {
			num = num > 0 ? num : -num;
			ans += num;
		}
	}
	printf("%d\n", ans);
	return 0;
}
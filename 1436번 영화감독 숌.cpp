#include <iostream>

using namespace std;

int main(void) {
	int n, tmp,result;

	cin >> n;
	for (int i = 666, j = 0; j < n; i++) {
		int cnt = 0; 
		tmp = i;

		while (tmp) {
			if (tmp % 10 == 6)
				cnt++;
			else
				cnt = 0;
			if (cnt == 3) {
				j++;
				break;
			}
			tmp /= 10;
		}
		if (j == n)
			cout << i << endl;
	}
	return 0;
}
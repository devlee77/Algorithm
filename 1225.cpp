#include <iostream>

using namespace std;

int main(void) {

	char a[10001];
	char b[10001];

	cin >> a;
	cin >> b;

	int i, j;
	long long sum;
	i = 0;
	sum = 0;
	while (a[i]) {
		j = 0;
		while (b[j]) {
			sum += ((a[i] - '0') * (b[j] - '0'));
			j++;
		}
		i++;
	}
	cout << sum;
	return 0;
}
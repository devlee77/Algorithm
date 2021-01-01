#include <iostream>

using namespace std;

int main(void) {
	int n, k,arr[10], sum = 0;
	
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = n - 1; i >= 0; i--)
		if (k / arr[i] != 0) {
			sum += k / arr[i];
			k %= arr[i];
		}
	cout << sum;
	return 0;
}
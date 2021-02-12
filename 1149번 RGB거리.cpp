#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int arr[1000][3];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
		if (i) {
			arr[i][0] += min(arr[i - 1][1], arr[i - 1][2]);
			arr[i][1] += min(arr[i - 1][0], arr[i - 1][2]);
			arr[i][2] += min(arr[i - 1][1], arr[i - 1][0]);
		}
	}
	cout << min(arr[n - 1][0], min(arr[n - 1][1], arr[n - 1][2]));
	return 0;
}
#include <iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	cout << (n - 1) + n*(m - 1);

	return 0;
}
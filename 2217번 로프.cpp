#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main(void) {
	int n;
	long long max = 0;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++)
		if (max < v[i] * (i + 1))
			max = v[i] * (i + 1);
	cout << max;
	return 0;
}
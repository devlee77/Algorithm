#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first != b.first)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main(void) {
	int t, n;
	cin >> t;

	while (t--) {
		int result = 1;
		cin >> n;
		vector<pair<int, int>> v;

		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			v.push_back({ x, y });
		}
		sort(v.begin(), v.end(), cmp);
		int min = v[0].second;
		for (int i = 1; i < n; i++)
			if (v[i].second < min) {
				min = v[i].second;
				result++;
			}
		cout << result << "\n";
	}
	return 0;
}
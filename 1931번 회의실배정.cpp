#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second != b.second)
		return a.second < b.second;
	else
		return a.first < b.first;
}

int main(void) {
	int n;
	int tmp, result = 1;
	vector<pair<int, int>> v;

	cin >> n;
	while (n--) {
		long long x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), cmp);
	tmp = 0;
	for (int i = 1; i < v.size(); i++)
		if (v[i].first >= v[tmp].second) {
			result += 1;
			tmp = i;
		}
	cout << result;
	return 0;
}
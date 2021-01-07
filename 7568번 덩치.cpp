#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n;
	vector<pair<int, int>> v;

	cin >> n;
	while (n--) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x, y });
	}
	for (int i = 0; i < v.size(); i++) {
		int rank = 1;
		for (int j = 0; j < v.size(); j++)
			if (v[i].first < v[j].first && v[i].second < v[j].second)
				rank++;
		cout << rank << " ";
	}
	return 0;
}
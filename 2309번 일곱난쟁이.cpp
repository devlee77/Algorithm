#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	vector<int> v;
	bool check = false;
	int n, sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> n;
		v.push_back(n);
		sum += n;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (v[i] + v[j]) == 100) {
				v.erase(v.begin() + j);
				v.erase(v.begin() + i);
				check = true;
				break;
			}
		}
		if (check) break;
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
	return 0;
}
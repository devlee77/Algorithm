#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int n;
	int result = 0;
	vector<int> v;

	cin >> n;
	while (n--) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		result += v[i] * (v.size() - i);
	}
	cout << result;
}

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n, m;
	vector<int> v;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	int max = 0;
	for (int i = 0; i < n - 2; i++)
		for (int j = i + 1; j < n - 1; j++)
			for (int z = j + 1; z < n; z++) {
				int tmp = v[i] + v[j] + v[z];
				if (tmp <= m && tmp > max)
					max = tmp;
			}
	cout << max;
	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int n, m;
	vector<vector<char>> v;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		vector<char> v2;
		
		for (int j = 0; j < m; j++) {
			char x;
			cin >> x;
			v2.push_back(x);
		}
		v.push_back(v2);
	}
	int result = 1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			for (int z = 1; z < m - j; z++)
				if (i + z < n && v[i][j] == v[i][j + z]
					&& v[i][j] == v[i + z][j]
					&& v[i][j] == v[i + z][j + z])
					result = max((z + 1)*(z + 1), result);
	cout << result;
	return 0;
}
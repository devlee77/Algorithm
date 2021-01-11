#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n, m;
	vector<vector<int>> v;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		vector<int> v2;
		
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			v2.push_back(x);
		}
		v.push_back(v2);
	}




	return 0;
}
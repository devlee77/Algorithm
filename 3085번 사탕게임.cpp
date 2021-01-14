#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
void change(char *x, char *y) {
	char tmp = *x;
	*x = *y;
	*y = tmp;
}

int check(vector<vector<char>> v) {
	int result = 0;
	char c1 = 'A';
	char c2 = 'A';

	for (int i = 0; i < n; i++) {
		int cnt1 = 1;
		int cnt2 = 1;
		for (int j = 0; j < n; j++) {
			if (c1 == v[i][j]) {
				cnt1++;
				result = max(cnt1, result);
			}
			else if (c1 != v[i][j]) {
				cnt1 = 1;
				c1 = v[i][j];
			}
			if (c2 == v[j][i]) {
				cnt2++;
				result = max(cnt2, result);
			}
			else if (c2 != v[j][i]) {
				cnt2 = 1;
				c2 = v[j][i];
			}
		}
		c1 = 'A';
		c2 = 'A';
	}
	return result;
}

int main(void) {
	
	vector<vector<char>> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		vector<char> v2;
		for (int j = 0; j < n; j++) {
			char x;
			cin >> x;
			v2.push_back(x);
		}
		v.push_back(v2);
	}
	
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int a, b;
			if (i < n - 1) {
				change(&v[i][j], &v[i + 1][j]);
				a = check(v);
				change(&v[i][j], &v[i + 1][j]);
			}
			if (j < n - 1) {
				change(&v[i][j], &v[i][j + 1]);
				b = check(v);
				change(&v[i][j], &v[i][j + 1]);
			}
			result = max(result, max(a, b));
		}
	}
	cout << result;
	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

	char arr[8][8] = {
		{ 'B','W','B','W','B','W','B','W' },
		{ 'W','B','W','B','W','B','W','B' },
		{ 'B','W','B','W','B','W','B','W' },
		{ 'W','B','W','B','W','B','W','B' },
		{ 'B','W','B','W','B','W','B','W' },
		{ 'W','B','W','B','W','B','W','B' },
		{ 'B','W','B','W','B','W','B','W' },
		{ 'W','B','W','B','W','B','W','B' },
	};

	char brr[8][8] = {
		{ 'W','B','W','B','W','B','W','B' },
		{ 'B','W','B','W','B','W','B','W' },
		{ 'W','B','W','B','W','B','W','B' },
		{ 'B','W','B','W','B','W','B','W' },
		{ 'W','B','W','B','W','B','W','B' },
		{ 'B','W','B','W','B','W','B','W' },
		{ 'W','B','W','B','W','B','W','B' },
		{ 'B','W','B','W','B','W','B','W' }
	};

	int x, y;
	vector<vector<char>> v;

	cin >> x >> y;
	for (int i = 0; i < x; i++) {
		vector<char> v2;

		for (int j = 0; j < y; j++) {
			char tmp;
			cin >> tmp;
			v2.push_back(tmp);
		}
		v.push_back(v2);
	}
	int cnt = 65;
	for (int i = 0; i <= x - 8; i++) {
		for (int j = 0; j <= y - 8; j++) {
			int cnt1 = 0;
			int cnt2 = 0;
			for (int a = 0; a < 8; a++) {
				for (int b = 0; b < 8; b++) {
					if (v[i + a][j + b] != arr[a][b])
						cnt1++;
					if (v[i + a][j + b] != brr[a][b])
						cnt2++;
				}
			}
			cnt = min(cnt, min(cnt1, cnt2));
		}
	}
	cout << cnt;
	return 0;
}
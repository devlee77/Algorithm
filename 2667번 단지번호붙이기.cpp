#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int cnt = 1;
int map[25][25] = { 0, };

int arrx[4] = { 0,0,1,-1 };
int arry[4] = { 1,-1,0,0 };

void dfs(int x, int y, int n) {
	map[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		int xi = x + arrx[i];
		int yi = y + arry[i];
		if (xi < 0 || yi < 0 || xi >= n || yi >= n) continue;
		if (map[xi][yi]) {
			dfs(xi, yi, n);
			cnt++;
		}
	}
}

int main(void) {
	int n;
	vector<int> v;
	cin >> n;
	for (int a = 0; a < n; a++)
		for (int b = 0; b < n; b++) {
			char x;
			cin >> x;
			map[a][b] = x - '0';
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (map[i][j]) {
				dfs(i, j, n);
				v.push_back(cnt);
				cnt = 1;
			}
	sort(v.begin(), v.end());
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	return 0;
}
#include <iostream>
#include <queue>

using namespace std;

bool map[52][52];
int x[4] = { 0,0,1,-1 };
int y[4] = { 1,-1,0,0 };

void dfs(int a, int b) {
	map[a][b] = 0;
	for (int i = 0; i < 4; i++) {
		int xi = a + x[i];
		int yi = b + y[i];
		if (map[xi][yi])
			dfs(xi, yi);
	}
}

int main(void) {
	int t, m, n, k;
	cin >> t;
	while (t--) {
		int cnt = 0;
		cin >> m >> n >> k;
		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			map[x + 1][y + 1] = 1;
		}
		for (int i = 1; i <= m; i++)
			for (int j = 1; j <= n; j++) {
				if (map[i][j] == 0)
					continue;
				dfs(i, j);
				cnt++;
			}
		cout << cnt << endl;
	}
	return 0;
}
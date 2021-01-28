#include <iostream>
#include <queue>

using namespace std;

bool map[1001][1001] = { 0, };
bool check[1001] = { 0, };

void dfs(int start, int n) {
	check[start] = 1;

	for (int i = 1; i <= n; i++)
		if (map[start][i] && !check[i])
			dfs(i, n);
}

int main(void) {
	int n, m, result = 0;
	
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		map[x][y] = 1;
		map[y][x] = 1;
	}
	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			dfs(i, n);
			result++;
		}
	}
	cout << result;
	return 0;
}
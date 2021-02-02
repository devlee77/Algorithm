#include <iostream>

using namespace std;

int cnt = 0;
bool arr[101][101] = { 0, };
bool visit[101];

void dfs(int x,int num) {
	visit[x] = 1;
	for (int i = 1; i <= num; i++)
		if (arr[x][i] && !visit[i]) {
			dfs(i, num);
			cnt++;
		}
}

int main(void) {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	dfs(1, n);
	cout << cnt;
	return 0;
}
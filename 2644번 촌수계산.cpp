#include <iostream>
#include <queue>

using namespace std;

bool map[101][101];
int check[101];

void bfs(int start, int n) {
	queue<int> q;
	q.push(start);
	check[start] = 1;

	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (map[tmp][i] && !check[i]) {
				check[i] = check[tmp] + 1;
				q.push(i);
			}
		}
	}
}

int main(void) {
	int n, m;
	int a, b;
	cin >> n;
	cin >> a >> b;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		map[x][y] = 1;
		map[y][x] = 1;
	}
	bfs(a, n);
	check[b] ? cout << check[b] - 1 : cout << -1;
	return 0;
}
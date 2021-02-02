#include <iostream>
#include <queue>

using namespace std;

bool map[101][101];
int visit[101];

void bfs(int n) {
	queue<int> q;
	visit[n] = 1;
	q.push(n);
	while (!q.empty()) {
		int s = q.size();
		for (int i = 0; i < s; i++) {
			int tmp = q.front();
			q.pop();
			for (int j = 1; j < 101; j++) {
				if (map[tmp][j] && !visit[j]) {
					q.push(j);
					visit[j] = visit[tmp] + 1;
				}
			}
		}
	}
}

int main(void) {
	int n, m, result, temp = 0, min = 5000;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		map[x][y] = 1;
		map[y][x] = 1;
	}
	for (int i = 1; i <= n; i++) {
		bfs(i);
		for (int j = 1; j <= n; j++) {
			temp += visit[j];
			visit[j] = 0;
		}
		if (min > temp) {
			result = i;
			min = temp;
		}
		temp = 0;
	}
	cout << result;
	return 0;
}
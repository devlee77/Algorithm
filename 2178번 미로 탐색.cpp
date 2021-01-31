#include <iostream>
#include <queue>

using namespace std;

bool map[101][101];
int visit[101][101];
int x[4] = { 0, 0, 1, -1 };
int y[4] = { 1, -1, 0, 0 };

void bfs() {
	int cnt = 1;
	queue<pair<int, int>> q;
	q.push({ 1, 1 });
	visit[1][1] = cnt;
	while (!q.empty()) {
		int size = q.size();
		cnt++;
		for (int i = 0; i < size; i++) {
			int front = q.front().first;
			int second = q.front().second;
			q.pop();
			for (int j = 0; j < 4; j++) {
				int tmpx = front + x[j];
				int tmpy = second + y[j];
				if (map[tmpx][tmpy] && !visit[tmpx][tmpy]) {
					q.push({ tmpx, tmpy });
					visit[tmpx][tmpy] = cnt;
				}
			}
		}
	}
}

int main(void) {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			char x;
			cin >> x;
			map[i][j] = x - '0';
		}
	bfs();
	cout << visit[n][m];
	return 0;
}
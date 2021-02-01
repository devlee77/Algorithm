#include <iostream>
#include <queue>

using namespace std;

queue<pair<int, int>> q;
int n, m;
int map[1000][1000];
int x[4] = { 0,0,-1,1 };
int y[4] = { 1,-1,0,0 };

int bfs() {
	int cnt = -1;
	while (!q.empty()) {
		int s = q.size();
		cnt++;
		for (int i = 0; i < s; i++) {
			int first = q.front().first;
			int second = q.front().second;
			q.pop();
			for (int j = 0; j < 4; j++) {
				int tmpx = first + x[j];
				int tmpy = second + y[j];
				if (tmpx < 0 || tmpy < 0 || tmpx >= n || tmpy >= m) continue;
				if (map[tmpx][tmpy] == 0) {
					map[tmpx][tmpy] = 1;
					q.push({ tmpx, tmpy });
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (map[i][j] == 0) return -1;
	return cnt;
}

int main(void) {
	cin >> m >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) q.push({ i,j });
		}
	cout << bfs();
	return 0;
}
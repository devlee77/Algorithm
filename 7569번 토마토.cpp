#include <iostream>
#include <queue>

using namespace std;

struct node {
	int z, x, y;
	node(int z, int x, int y) {
		this->z = z;
		this->x = x;
		this->y = y;
	}
};

queue<node> q;
int map[100][100][100];
int n, m, h;
int z[6] = { 1,-1,0,0,0,0 };
int x[6] = { 0,0,1,-1,0,0 };
int y[6] = { 0,0,0,0,1,-1 };

int bfs() {
	int cnt = -1;
	while (!q.empty()) {
		int s = q.size();
		cnt++;
		for (int i = 0; i < s; i++) {
			node top = q.front();
			q.pop();
			for (int j = 0; j < 6; j++) {
				int tmpz = top.z + z[j];
				int tmpx = top.x + x[j];
				int tmpy = top.y + y[j];
				if (tmpz < 0 || tmpx < 0 || tmpy < 0 || tmpz >= h || tmpx >= n || tmpy >= m) continue;
				if (map[tmpz][tmpx][tmpy] == 0) {
					map[tmpz][tmpx][tmpy] = 1;
					q.push(node(tmpz, tmpx, tmpy));
				}
			}
		}
	}
	for (int i = 0; i < h; i++)
		for (int j = 0; j < n; j++)
			for (int z = 0; z < m; z++)
				if (map[i][j][z] == 0)
					return -1;
	return cnt;
}

int main(void) {
	cin >> m >> n >> h;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < n; j++)
			for (int z = 0; z < m; z++) {
				cin >> map[i][j][z];
				if (map[i][j][z] == 1) q.push(node(i, j, z));
			}
	cout << bfs();
	return 0;
}
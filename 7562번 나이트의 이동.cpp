#include <iostream>
#include <queue>

using namespace std;

int map[300][300] = { 0, };
int block, x, y, xgoal, ygoal;
int arrx[8] = { -1,-1,1,1,2,2,-2,-2 };
int arry[8] = { 2,-2,2,-2,1,-1,1,-1 };

int bfs() {
	if (x == xgoal && y == ygoal)
		return 0;
	queue<pair<int, int>> q;
	int cnt = 1;
	q.push({ x,y });
	map[x][y] = cnt;
	while (!q.empty()) {
		int s = q.size();
		cnt++;
		for (int i = 0; i < s; i++) {
			int front = q.front().first;
			int second = q.front().second;
			q.pop();
			for (int j = 0; j < 8; j++) {
				int xi = front + arrx[j];
				int yi = second + arry[j];
				if (xi < 0 || yi < 0 || xi >= block || yi >= block) continue;
				if (xi == xgoal && yi == ygoal) return cnt - 1;
				if (!map[xi][yi]) {
					map[xi][yi] = cnt;
					q.push({ xi, yi });
				}
			}
		}
	}
}

int main(void) {
	int n;
	cin >> n;
	while (n--) {
		cin >> block;
		cin >> x >> y;
		cin >> xgoal >> ygoal;
		cout << bfs() << endl;
		for (int i = 0; i < block; i++)
			for (int j = 0; j < block; j++)
				map[i][j] = 0;
	}
	return 0;
}
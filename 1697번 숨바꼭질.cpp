#include <iostream>
#include <queue>

using namespace std;

int map[100001] = { 0, };
int arrx[2] = { 1, -1 };

int bfs(int n, int k) {
	queue<int> q;
	map[n] = 1;
	q.push(n);
	while (!q.empty()) {
		int s = q.size();
		for (int i = 0; i < s; i++) {
			int x = q.front();
			if (x == k) return map[k];
			q.pop();
			for (int j = 0; j < 2; j++) {
				int xi = x + arrx[j];
				if (xi < 0 || xi > 100000) continue;
				if (!map[xi]) {
					map[xi] = map[x] + 1;
					q.push(xi);
				}
			}
			if (x * 2 <= 100000 && !map[x * 2]) {
				map[x * 2] = map[x] + 1;
				q.push(x * 2);
			}
		}
	}
}

int main(void) {
	int n, k;
	cin >> n >> k;
	cout << bfs(n, k) - 1;
	return 0;
}
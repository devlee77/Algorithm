#include <iostream>
#include <queue>

using namespace std;

int f, s, g, u, d;
int build[1000001] = { 0, };

void bfs() {
	int cnt = 1;
	queue<int> q;
	q.push(s);
	build[s] = cnt;
	while (!q.empty()) {
		int s = q.size();
		cnt++;
		for (int i = 0; i < s; i++) {
			int temp = q.front();
			q.pop();
			int up = temp + u;
			int down = temp - d;
			if (up <= f && !build[up]) {
				q.push(up);
				build[up] = cnt;
			}
			if (down >= 1 && !build[down]) {
				q.push(down);
				build[down] = cnt;
			}
		}
	}
}

int main(void) {
	cin >> f >> s >> g >> u >> d;
	bfs();
	if (!build[g])
		cout << "use the stairs";
	else
		cout << build[g] - 1;
	return 0;
}
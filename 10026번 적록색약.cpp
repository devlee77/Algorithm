#include <iostream>

int n;
char map[100][100];
bool visit[100][100];
int arrx[4] = { 0,0,-1,1 };
int arry[4] = { 1,-1,0,0 };

using namespace std;

void dfs(int x, int y) {
	visit[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int xi = x + arrx[i];
		int yi = y + arry[i];
		if (xi < 0 || yi < 0 || xi >= n || yi >= n) continue;
		if (map[x][y] == map[xi][yi] && !visit[xi][yi])
			dfs(xi, yi);
	}
}

int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visit[i][j]) {
				dfs(i, j);
				result++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			visit[i][j] = 0;
			if (map[i][j] == 'G')
				map[i][j] = 'R';
		}
	}
	int result2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visit[i][j]) {
				dfs(i, j);
				result2++;
			}
		}
	}
	cout << result << " " << result2;
	return 0;
}
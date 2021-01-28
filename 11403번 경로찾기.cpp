#include <iostream>

using namespace std;

bool arr[101][101];
bool check[101] = { 0, };

void dfs(int start, int n) {
	for (int i = 1; i <= n; i++)
		if (arr[start][i] && !check[i]) {
			check[i] = 1;
			dfs(i, n);
		}
}

int main(void) {
	int n, tmp;

	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			cin >> tmp;
			arr[i][j] = tmp;
		}
	for (int i = 1; i <= n; i++) {
		dfs(i, n);
		for (int j = 1; j <= n; j++) {
			arr[i][j] = check[j];
			check[j] = 0;
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++)
			cout << arr[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
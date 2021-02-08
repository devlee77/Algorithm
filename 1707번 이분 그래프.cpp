#include <iostream>
#include <vector>

using namespace std;

vector<int> map[20001];
int visit[20001] = { 0, };
bool tmp = false;

void dfs(int now) {
	int s = map[now].size();
	for (int i = 0; i < s; i++) {
		int node = map[now][i];
		if (!visit[node]) {
			visit[node] = 3 - visit[now];
			dfs(node);
		}
		else if (visit[node] == visit[now]) {
			tmp = true;
			return;
		}
	}
}

int main(void) {
	int n;
	cin >> n;
	while (n--) {
		int v, e;
		cin >> v >> e;
		while (e--) {
			int a, b;
			cin >> a >> b;
			map[a].push_back(b);
			map[b].push_back(a);
		}
		for (int i = 1; i <= v; i++)
			if (!visit[i]) {
				dfs(i);
				visit[i] = 1;
			}
		tmp ? cout << "NO\n" : cout << "YES\n";
		tmp = false;
		for (int i = 0; i <= v; i++) {
			map[i].clear();
			visit[i] = 0;
		}
	}
	return 0;
}
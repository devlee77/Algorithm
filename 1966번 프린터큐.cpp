#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int find_max(queue<pair<int, int>> v) {
	int top = 0;
	for (int i = 0; i < v.size(); i++) {
		top = max(v.front().first, top);
		v.push(v.front());
		v.pop();
	}
	return top;
}

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		queue<pair<int,int>> v;

		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (i == m)
				v.push({ x, 1 });
			else
				v.push({ x, 0 });
		}
		int cnt = 1;
		while (1) {
			int top = find_max(v);
			while (top != v.front().first) {
				v.push(v.front());
				v.pop();
			}
			if (top == v.front().first && !v.front().second) {
				v.pop();
				cnt++;
			}
			else
				break;
		}
		cout << cnt << endl;
	}
	return 0;
}
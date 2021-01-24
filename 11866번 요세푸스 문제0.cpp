#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	int n, k, cnt = 1;
	queue<int> q;

	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		q.push(i);
	cout << "<";
	while (!q.empty()) {
		if (cnt != k) {
			q.push(q.front());
			cnt++;
			q.pop();
		}
		else if (cnt == k) {
			if (q.size() == 1)
				cout << q.front();
			else
				cout << q.front() << ", ";
			q.pop();
			cnt = 1;
		}
	}
	cout << ">";
	return 0;
}
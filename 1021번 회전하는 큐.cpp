#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int find_index(deque<int> dq, int tmp) {
	int i = 0;
	while (dq[i] != tmp)
		i++;
	return i;
}

int main(void) {
	int n, m;
	deque<int> dq;
	queue<int> mem;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		dq.push_back(i);
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		mem.push(x);
	}
	int result = 0;
	while (!mem.empty()) {
		int i = find_index(dq, mem.front());
		if (dq.size() - i <= i)
			while (dq.front() != mem.front()) {
				dq.push_front(dq.back());
				dq.pop_back();
				result++;
			}
		else if (dq.size() - i > i)
			while (dq.front() != mem.front()) {
				dq.push_back(dq.front());
				dq.pop_front();
				result++;
			}
		mem.pop();
		dq.pop_front();
	}
	cout << result;
	return 0;
}
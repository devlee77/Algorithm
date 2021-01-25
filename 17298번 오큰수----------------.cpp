#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main(void) {
	int n, x;
	stack<int> s, v, ans;

	cin >> n;
	int m = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push(x);
	}
	while (!v.empty()) {
		while (s.size() && s.top() <= v.top())
			s.pop();
		ans.push(s.empty() ? -1 : s.top());
		s.push(v.top());
		v.pop();
	}
	while (!ans.empty()){
		cout << ans.top() << " ";
		ans.pop();
	}
	return 0;
}
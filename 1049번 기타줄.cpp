#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int n, m;
	int result, set = 1000, each = 1000;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		set = min(set, x);
		each = min(each, y);
	}
	
	if ((each * 6) < set)
		cout << n * each;
	else {
		result = (n / 6) * set;
		n %= 6;
		if ((n * each) < set)
			result += (n * each);
		else
			result += set;
		cout << result;
	}
	return 0;
}
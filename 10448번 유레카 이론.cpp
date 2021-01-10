#include <iostream>
#include <vector>

using namespace std;

int is_check(int x) {
	for (int a = 1; a < 50; a++)
		for (int b = 1; b < 50; b++)
			for (int c = 1; c < 50; c++)
				if (x == (((a * (a + 1)) / 2) + ((b * (b + 1)) / 2) + ((c * (c + 1)) / 2)))
					return 1;
	return 0;
}

int main(void) {
	int n;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < v.size(); i++)
		cout << is_check(v[i]) << endl;
	return 0;
}
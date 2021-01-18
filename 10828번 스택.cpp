#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	int n;
	vector<int> v;

	cin >> n;
	while (n--) {
		string str;

		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			v.push_back(x);
		}
		else if (str == "pop") {
			if (v.empty())
				cout << -1 << endl;
			else {
				cout << v.back() << endl;
				v.pop_back();
			}
		}
		else if (str == "size")
			cout << v.size() << endl;
		else if (str == "empty")
			cout << v.empty() << endl;
		else {
			if (v.empty())
				cout << -1 << endl;
			else
				cout << v.back() << endl;
		}
	}
	return 0;
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	int n, tmp;
	string s;
	vector<int> v;

	cin >> n;
	while (n--) {
		cin >> s;
		if (s == "push") {
			cin >> tmp;
			v.push_back(tmp);
		}
		else if (s == "front") {
			if (v.empty())
				cout << -1 << endl;
			else
				cout << v.front() << endl;
		}
		else if (s == "back") {
			if (v.empty())
				cout << -1 << endl;
			else
				cout << v.back() << endl;
		}
		else if (s == "size")
			cout << v.size() << endl;
		else if (s == "empty")
			cout << v.empty() << endl;
		else if (s == "pop") {
			if (v.empty())
				cout << -1 << endl;
			else {
				cout << v.front() << endl;
				v.erase(v.begin());
			}
		}
	}
	return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int n, tmp;
	string str;
	vector<int> v;

	cin >> n;
	while (n--) {
		cin >> str;
		if (str == "push_front") {
			cin >> tmp;
			v.insert(v.begin(), tmp);
		}
		else if (str == "push_back") {
			cin >> tmp;
			v.push_back(tmp);
		}
		else if (!v.empty() && str == "pop_front") {
			cout << v.front() << endl;
			v.erase(v.begin());
		}
		else if (!v.empty() && str == "pop_back") {
			cout << v.back() << endl;
			v.pop_back();
		}
		else if (str == "size")
			cout << v.size() << endl;
		else if (str == "empty")
			cout << v.empty() << endl;
		else if (!v.empty() && str == "front")
			cout << v.front() << endl;
		else if (!v.empty() && str == "back")
			cout << v.back() << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}
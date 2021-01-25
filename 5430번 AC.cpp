#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(void) {
	int t;

	cin >> t;
	while (t--) {
		string s, str, tmp;
		int n, i = 0;
		deque<int> dq;

		cin >> str;
		cin >> n;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] >= 48 && s[j] <= 57) {
				tmp += s[j];
			}
			else if (s[j] == ',' || s[j] == ']'&& tmp != "") {
				dq.push_back(stoi(tmp));
				tmp = "";
			}
		}
		bool r = 0;
		bool check = 1;
		while (str[i]) {
			if (str[i] == 'R')
				r = !r;
			else if (!dq.empty() && str[i] == 'D') {
				if (!r)
					dq.pop_front();
				else if (r)
					dq.pop_back();
			}
			else {
				cout << "error" << endl;
				check = !check;
				break;
			}
			i++;
		}
		if (!check)
			continue;

		cout << "[";
		if (!r)
			while (dq.size()) {
				cout << dq.front();
				dq.pop_front();
				if (dq.size())
					cout << ",";
			}
		else if (r)
			while (dq.size()) {
				cout << dq.back();
				dq.pop_back();
				if (dq.size())
					cout << ",";
			}
		cout << "]" << endl;
	}
	return 0;
}
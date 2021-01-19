#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
	int t;
	cin >> t;

	while (t--) {
		string str;
		stack<char> s;
		cin >> str;
		int i = 0;
		while (str[i]) {
			if (str[i] == '(' || s.empty())
				s.push(str[i]);
			else if (s.top() == '(')
				s.pop();
			i++;
		}
		if (s.empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
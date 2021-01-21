#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void) {
	string str;

	getline(cin, str);
	while (str != ".") {
		stack<char> s;
		int i = 0;
		while (str[i]) {
			if (str[i] == '(' || str[i] == '[')
				s.push(str[i]);
			if (!s.empty() && (str[i] == ')' || str[i] == ']')) {
				if (str[i] == ')' && s.top() == '(')
					s.pop();
				else if (str[i] == ']' && s.top() == '[')
					s.pop();
				else
					s.push(str[i]);
			}
			else if (s.empty() && (str[i] == ')' || str[i] == ']'))
				s.push(str[i]);
			i++;
		}
		if (s.empty())
			cout << "yes" << endl;
		else
			cout << "no" << endl;
		getline(cin, str);
	}
	return 0;
}
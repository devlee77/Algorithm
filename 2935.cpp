#include <iostream>
#include <string>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string	first, second;
	char	c;

	cin >> first >> c >> second;
	if (c == '*') {
		first += second;
		for (int i = 0; i < first.size(); i++) {
			if (i != 0 && first[i] == '1')
				continue;
			cout << first[i];
		}
	}
	else if (c == '+') {
		if (first.size() > second.size()) {
			first[first.size() - second.size()] = '1';
			cout << first << endl;
		}
		else if (first.size() < second.size()) {
			second[second.size() - first.size()] = '1';
			cout << second << endl;
		}
		else {
			first[0] = '2';
			cout << first << endl;
		}
	}
	return 0;
}
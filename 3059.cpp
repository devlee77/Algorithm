#include <iostream>
#include <string>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	while (n--) {
		int sum = 0;
		int n[26] = { 0, };
		string s;

		cin >> s;
		for (int i = 0; i < s.size(); i++)
			n[s[i] - 'A'] = 1;
		for (int i = 0; i < 26; i++) {
			if (n[i] == 0)
				sum += i + 'A';
		}
		cout << sum << endl;
	}
	return 0;
}
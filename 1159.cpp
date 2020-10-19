#include <iostream>
#include <string>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	int alphabet[26] = { 0, };

	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;

		char x = a[0];
		alphabet[x - 97]++;
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] >= 5) {
			char a = i + 97;
			cout << a;
		}
		else
			cnt++;
	}
	if (cnt == 26) cout << "PREDAJA";

	return 0;
}
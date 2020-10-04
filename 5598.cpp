#include <iostream>
#include <string>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string a;
	cin >> a;

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == 'A') a[i] = 'X';
		else if (a[i] == 'B') a[i] = 'Y';
		else if (a[i] == 'C') a[i] = 'Z';
		else
			a[i] -= 3;
	}
	cout << a;

	return 0;
}
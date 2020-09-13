#include <iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	int a=0, b=0;
	cin >> n;

	while (n--) {
		char x;
		cin >> x;
		if (x == 'A') a++;
		else if(x == 'B') b++;
	}

	if (a > b) cout << "A";
	else if (a < b) cout << "B";
	else cout << "Tie";

	return 0;
}
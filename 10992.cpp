#include <iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++)
			cout << " ";
		if (i == 0 || i == n - 1) {
			if (i == 0)
				cout << "*";
			else {
				for (int k = 0; k < 2 * n - 1; k++)
					cout << "*";
			}
		}
		else {
			cout << "*";
			for (int l = 0; l < 2 * i - 1; l++)
				cout << " ";
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
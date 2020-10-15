#include <iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;
	while (cin >> n >> k) {
		int stamp = n;
		int chicken = n;

		while (stamp >= k) {
			stamp -= k;
			stamp++;
			chicken++;
		}
		cout << chicken << endl;
	}
	return 0;
}
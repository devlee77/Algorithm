#include <iostream>

using namespace std;

int main(void) {
	int money, result = 0;
	int arr[6] = { 500, 100, 50, 10, 5, 1 };
	
	cin >> money;
	money = 1000 - money;
	for (int i = 0; i < 6; i++)
		if (money / arr[i] != 0) {
			result += money / arr[i];
			money %= arr[i];
		}
	cout << result;
	return 0;
}
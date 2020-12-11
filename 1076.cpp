#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string arr[10] = {"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
	string a;
	long long int x;

	cin >> a;
	for (int i = 0; i < 10; i++) {
		if (a == arr[i]) x = i * 10;
	}

	cin >> a;
	for (int i = 0; i < 10; i++) {
		if (a == arr[i]) x += i;
	}

	cin >> a;
	for (int i = 0; i < 10; i++) {
		if (a == arr[i]) x *= pow(10,i);
	}

	cout << x;

	return 0;
}
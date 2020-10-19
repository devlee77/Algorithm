#include <iostream>

using namespace std;

int main(void){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int a, b, c, d;
	
	cin >> a >> b;
	cin >> c >> d;
	
	int min, min2;
	min = (a - b) + (d - c);
	min2 = (b - a) + (c - d);
	
	if (min < min2)
		cout << a + d;
	else
		cout << b + c;
	
	return 0;
}
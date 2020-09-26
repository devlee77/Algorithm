#include <iostream>

using namespace std;

int main(void){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;
	
	int a, b;
	a = (n + 8) % 12;
	b = (n + 6) % 10;
	
	printf("%c%d", 'A' + a, b);
	
	return 0;
}
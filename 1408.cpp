#include <iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int h, m, s;
	int x, y;
	int result;

	scanf("%d:%d:%d", &h, &m, &s);
	x = s + m * 60 + h * 3600;
	scanf("%d:%d:%d", &h, &m, &s);
	y = s + m * 60 + h * 3600;
	
	if(x > y)
		y += 24 * 3600;
	result = y - x;
	
	h = result / 3600;
	result %= 3600;
	
	m = result / 60;
	result %= 60;
	
	s = result;

	printf("%02d:%02d:%02d", h, m, s);
	return 0;
}
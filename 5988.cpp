#include <iostream>

using namespace std;

int main(void){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;
	
	while (n--){
		char c[70];
		cin >> c;
		
		int i = 0;
		while (c[i])
			i++;
		if ((c[i - 1] - '0') % 2 == 0)
			cout << "even" << endl;
		else
			cout << "odd" << endl;
	}
	return 0;
}
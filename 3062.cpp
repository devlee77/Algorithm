#include <iostream>
#include <string>

using namespace std;

int main(void){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;
	
	while (n--){
		string s;
		string s2;
		string result;
		bool t = 0;
		cin >> s;
		
		for (int i = s.size() - 1; i >= 0; i--)
			s2 += s[i];
		long num;
		num = stoi(s) + stoi(s2);
		result = to_string(num);
		for (int i = 0; i < (result.size()-1) / 2; i++){
			if (result[i] == result[(result.size()-1) - i])
				continue;
			else {
				cout << "NO" << endl;
				t = 1;
				break;
			}
		}
		if (!t)
			cout << "YES" << endl;
	}
	return 0;
}
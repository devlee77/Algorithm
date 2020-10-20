#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(void){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	vector<int> v;
	string s;
	cin >> s;
	
	long long sum = 0;
	bool check_zero = false;
	int i = 0;
	while(s[i]){
		sum += s[i] - '0';
		if (s[i] == '0')
			check_zero = 1;
		v.push_back(s[i] - '0');
		i++;
	}
	
	if(!check_zero || sum % 3 != 0)
		cout << "-1";
	else {
		sort(v.begin(), v.end(), greater<int>());
		for(int i = 0; i < v.size(); i++)
			cout << v[i];
	}
	return 0;
}
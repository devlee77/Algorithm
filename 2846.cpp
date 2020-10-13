#include <iostream>
#include <vector>

using namespace std;

int main(void){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<int> v;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	
	int max = 0;
	int cnt = 0;
	
	for(int i = 1; i < n; i++){
		if (v[i - 1] < v[i]){
			cnt += v[i] - v[i - 1];
		}
		else {
			if (cnt > max){
				max = cnt;
			}
			cnt = 0;
		}
	}
	
	if(cnt > max) {
		max = cnt;
	}
	cout << max << endl;
	
	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v1;
vector<int> v2;

//v1에서 v2뻬기
int v1_bainarysearch(int start, int end, int check) {
	int mid;
	while (start <= end) {
		mid = (end + start) / 2;
		if (v1[mid] == check)
			return 1;
		v1[mid] > check ? end = mid - 1 : start = mid + 1;
	}
	return 0;
}

//v2에있는지 확인
int v2_bainarysearch(int start, int end, int check) {
	int mid;
	while (start <= end) {
		mid = (end + start) / 2;
		if (v2[mid] == check)
			return 1;
		v2[mid] > check ? end = mid - 1 : start = mid + 1;
	}
	return 0;
}

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	int tmp;
	for (int i = 0; i < a; i++) {
		cin >> tmp;
		v1.push_back(tmp);
	}
	for (int i = 0; i < b; i++) {
		cin >> tmp;
		v2.push_back(tmp);
	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	int cnt = 0;

	for (int i = 0; i < v2.size(); i++) {
		if (v1_bainarysearch(0, v1.size() - 1, v2[i]))
			cnt++;
	}
	a = a - cnt;

	cnt = 0;
	for (int i = 0; i < v1.size(); i++) {
		if (v2_bainarysearch(0, v2.size() - 1, v1[i]))
			cnt++;
	}
	b = b - cnt;

	cout << a + b;

	return 0;
}
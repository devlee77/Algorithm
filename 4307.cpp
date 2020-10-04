#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;
		
	while(n--) {
		int len, num;
		cin >> len >> num;
		
		int longtime = 0;
		int shorttime = 0;
		int mi, ma;
		while(num--) {
			int x;
			cin >> x;
			
			ma = max(x, len - x);
			mi = min(x, len - x);
			
			if(longtime < ma)
				longtime = ma;
			if(shorttime < mi)
				shorttime = mi;
		}
		cout << shorttime << " " << longtime << endl;
	}	
	return 0;
}
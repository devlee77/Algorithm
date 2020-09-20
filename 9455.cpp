#include <iostream>

using namespace std;

int main(void){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;
	
	while (n--){
		int x, y;
		cin >> x >> y;
		
		bool arr[101][101] = {0, };
		
		for (int i = 1; i <= x; i++){
			for (int j = 1; j <= y; j++){
				int tmp;
				cin >> tmp;
				arr[i][j] = tmp;
			}
		}
		
		int cnt = 0;
		for (int i = 1; i <= x; i++){
			for (int j = 1; j <= y; j++){
				if(arr[i][j] == 1){
					int a = i;
					while (a <= x){
						if (arr[a][j] == 0)
							cnt++;
						a++;
					}
				}
			}
		}
		
		cout << cnt << endl;
	}
	return 0;
}
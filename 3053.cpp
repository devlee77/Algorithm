#include <iostream>
#include <cmath>
 
int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
    double R, S1, S2;
    scanf("%lf", &R);
    S1 = M_PI * R * R;
    S2 = R * R * 2;
 
    printf("%.6f\n", S1);
    printf("%.6f\n", S2);
    return 0;
}
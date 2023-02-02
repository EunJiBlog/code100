#include <stdio.h>
#include <math.h>
int main() {
	int a, r, n ; //a:시작값,r:등비 값, n: 몇번째 자리
	double rst;
	scanf("%d %d %d", &a, &r, &n);
	rst = pow((double)r, (double)n - 1);
	printf("%.0lf", (double)a*rst);
	return 0;
}
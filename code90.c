#include <stdio.h>
#include <math.h>
int main() {
	int a, r, n ; //a:���۰�,r:��� ��, n: ���° �ڸ�
	double rst;
	scanf("%d %d %d", &a, &r, &n);
	rst = pow((double)r, (double)n - 1);
	printf("%.0lf", (double)a*rst);
	return 0;
}
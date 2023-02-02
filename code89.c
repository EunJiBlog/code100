#include <stdio.h>
int main() {
	int a, d, n; //a:시작값, d:등차의 값 ,n:몇번째 자리
	scanf("%d %d %d", &a, &d, &n);
	printf("%d", (n*d + a - d));
	return 0;
}
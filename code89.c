#include <stdio.h>
int main() {
	int a, d, n; //a:���۰�, d:������ �� ,n:���° �ڸ�
	scanf("%d %d %d", &a, &d, &n);
	printf("%d", (n*d + a - d));
	return 0;
}
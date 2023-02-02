#include <stdio.h>
int main() {
	int hard, bit, c, size;
	double rst;
	scanf("%d %d %d %d", &hard, &bit, &c, &size);
	rst = hard * bit*c*size;
	rst = rst /8/1024/1024 ;
	printf("%.1f MB", rst);

	return 0;
}


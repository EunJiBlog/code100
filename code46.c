#include <stdio.h>
int main() {
	int int_num1, int_num2, int_num3, sum;
	scanf("%d %d %d", &int_num1, &int_num2, &int_num3);
	sum = int_num1 + int_num2 + int_num3;
	printf("%d\n%.1f",sum, (float)sum/3);

	return 0;
}
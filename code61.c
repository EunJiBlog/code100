#include <stdio.h>
int main() {
	int int_num1, int_num2;
	scanf("%d %d", &int_num1, &int_num2);
	printf("%d", (int_num1 | int_num2));
	return 0;
}
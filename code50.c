#include <stdio.h>
int main() {
	int int_num1, int_num2;
	scanf("%d %d", &int_num1, &int_num2);
	if (int_num1 == int_num2)
		printf("1");
	else
		printf("0");
	return 0;
}
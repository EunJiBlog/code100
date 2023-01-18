#include <stdio.h>
int main() {
	long int int_num1, int_num2;
	scanf("%ld %ld", &int_num1, &int_num2);
	int_num1 += int_num2;
	printf("%ld", int_num1);
	return 0;
}
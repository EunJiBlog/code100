#include <stdio.h>
int main() {
	int int_num1, int_num2;
	scanf("%d %d", &int_num1, &int_num2);
	for (int i = 0; i < int_num2; i++) {
		int_num1 *= 2;

	}		
	printf("%d", int_num1);
	return 0;
}
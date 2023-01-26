#include <stdio.h>
int main() {
	int int_num1, int_num2;
	scanf("%d %d", &int_num1, &int_num2);
	printf("%d\n%d\n%d\n%d\n%d\n%.2f\n", int_num1 + int_num2, int_num1 - int_num2, 
		int_num1*int_num2, int_num1 / int_num2, int_num1 % int_num2, (float)int_num1/(float)int_num2);
	return 0;
}
#include <stdio.h>
int main() {
	int int_num1, int_num2, int_num3;
	scanf("%d %d %d", &int_num1, &int_num2, &int_num3);
	printf("%d",int_num1<int_num2?(int_num1<int_num3?int_num1:int_num3):(int_num2<int_num3?int_num2:int_num3));
	return 0;
}
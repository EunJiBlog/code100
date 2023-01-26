#include <stdio.h>
int main() {
	int int_num;
	scanf("%d", &int_num);
	int_num<0? printf("minus\n"): printf("plus\n");
	int_num%2==0? printf("even\n") : printf("odd\n");
	return 0;
}
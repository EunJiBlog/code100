#include <stdio.h>
int main() {
	int int_num;
	scanf("%d", &int_num);
	int_num >=90 ? printf("A\n"): (int_num >= 80 ? printf("B\n"): (int_num >= 70 ? printf("C\n"): (int_num >= 60 ? printf("D\n") : (int_num >=50 ? printf("E\n"): printf("F\n")))) ) ;
	return 0;
}
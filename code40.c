#include <stdio.h>

int main() {
	long int intlong_num;
	scanf("%ld", &intlong_num);
	intlong_num = ~intlong_num + 1; //2�� ����
	printf("%ld", intlong_num);
	return 0;
}
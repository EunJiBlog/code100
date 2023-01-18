#include <stdio.h>
int main() {
	int int_5num,n10000,n1000,n100,n10,n1;

	scanf("%5d", &int_5num);
	
	n1 = int_5num % 10;
	n10 = int_5num % 100 - n1;
	n100 = int_5num % 1000 - n10 - n1;
	n1000 = int_5num % 10000 - (n100+n10+n1);
	n10000 = (int_5num / 10000) * 10000;
	

	printf("%d\n", n10000);
	printf("%d\n", n1000);
	printf("%d\n", n100);
	printf("%d\n", n10);
	printf("%d\n", n1);
	

	return 0;
}
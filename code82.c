#include <stdio.h>
int main() {
	int int_num;
	scanf("%X", &int_num);
	for (int i=1; i<16;i++)
	{
		printf("%X*%X=%X\n", int_num, i, int_num*i);
	}
	return 0;
}
#include <stdio.h>
int main() {
	int int_bit0, int_bit1;

	scanf("%d %d", &int_bit0, &int_bit1);
	if (int_bit0==1 ||int_bit1==1)
	{
		printf("1");
	} 
	else
	{
		printf("0");
	}
	return 0;
}